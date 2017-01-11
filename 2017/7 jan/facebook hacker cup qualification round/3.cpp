#include<bits/stdc++.h>
using namespace std;
float value(int x,int rolls,int faces,float p[][21])
{
    //cout<<"finding x value"<<x<<"   "<<"rolls  "<<rolls<<endl;
    int face=faces;
    if(p[x][rolls]>0){
      //      cout<<"here"<<p[x][rolls]<<endl;
        //    system("pause");
            return p[x][rolls];}
    else
    {
        float toret=0;
        while(faces>0)
        {
            if(x-faces>0&&rolls>0)toret+=value(x-faces,rolls-1,face,p);
            faces--;
        }
        p[x][rolls]=toret;
        //cout<<p[x][rolls]<<endl;
        //system("pause");
        return toret;
    }


}
int main()
{
        ifstream fin;
        ofstream fout;
        fin.open("lazy_loading.txt");
        fout.open("output.txt");

        int t;
        fin>>t;
        while(t--)
        {
        int x,s;
        fin>>x>>s;
        float ma=0;
        while(s--)
        {
            int ro,y;
            char c;
            fin>>ro>>c>>y;
            c=getchar();
            int q=x;
            if(c=='+'||c=='-')
            {
                int d;
                fin>>d;
                if(c=='+')q-=d;
                else q+=d;
                getchar();
            }
            fout<<"We are at case:"<<ro<<" "<<y<<endl;
            if(q>420||q<=0){float m=0;
            if(m>ma)ma=m;
            continue;
            }
            float p[410][21];
            for(int i=0;i<410;i++)
            {
            for(int j=0;j<21;j++)
            {
            if(j==1)p[i][j]=(float)0;
            else p[i][j]=(float)-1;
            }
            }
            for(int i=1;i<=y;i++)
            {
            p[i][1]=(float)1;
            for(int j=0;j<ro;j++)
            {
                p[i][1]/=(6);
            }
            }
            float m=0;
            while(q<=ro*y)
            {
            m+=value(q,ro,y,p);
            q++;
            }
            if(m>ma)ma=m;
            cout<<"done"<<m<<endl;
            }

         cout<<ma<<endl;
        }
    return 0;
}

