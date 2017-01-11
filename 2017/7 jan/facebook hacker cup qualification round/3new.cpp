#include<bits/stdc++.h>
using namespace std;
int conv(string s)
{
    int ans=0;
    int t=1;
    for(int i=s.length()-1;i>=0;i--)
    {
        char a=s[i];
        ans+=t*(a-'0');
        t*=10;
    }
    return ans;


}
float value(int x,int a,int b)
{
    double p[410][21];
    for(int i=0;i<410;i++)
    {
        for(int j=0;j<21;j++)
        {
            p[i][j]=(double)0;
        }
    }
    for(int i=1;i<=b;i++)
    {
        p[i][1]=(1.0/b);
    }
    for(int j=2;j<=a;j++)
    {
    for(int i=2;i<=b*j;i++)
    {
            int k=i-1;
            while(k>0&&k>=i-b)
            {
                p[i][j]+=p[k][j-1];
                k--;
            }
        p[i][j]/=b;
    }
    }
    if(x>a*b)return (float)0;
    else if(x<1)return (float)(1);
    else
    {
        float ans=0;
        for(int i=x;i<=a*b;i++)
        {
            ans+=p[i][a];
        }
        return ans;
    }
}
int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("fightingthezombie.txt");
    fout.open("output.txt");
    fout.precision(6);
    fout.setf(ios::fixed);
    fout.setf(ios::showpoint);
    int t;
    fin>>t;
    int t2=1;
    while(t--)
    {
    int x,no;
    fin>>x>>no;
    float ma=0;
    while(no--)
    {
        int q=x;
        string s;
        fin>>s;
        string sa;
        string sb;
        string sd;
        int i=0;
        while(s[i]!='d')
        {
            i++;
        }
        sa=s.substr(0,i);
        i++;
        int a,b;
        int d=0;
        a=conv(sa);
        int j=i;
        while(s[j]!='+'&&s[j]!='-')
        {
            if(j==s.length()-1)break;
            j++;
        }
        if(s[j]=='+'||s[j]=='-')j--;
        sb=s.substr(i,j-i+1);
        b=conv(sb);
        if(j!=s.length()-1)
        {
            j+=2;
            sd=s.substr(j,s.length()-j);
            d=conv(sd);
            j-=1;
            if(s[j]=='+')q-=d;
            else q+=d;
        }
        float m=value(q,a,b);
        if(ma<m)ma=m;
    }
   fout<<"Case #"<<t2<<": "<<ma<<endl;
    t2++;
    }
    return 0;
}
