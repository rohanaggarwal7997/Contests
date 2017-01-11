#include<bits/stdc++.h>
using namespace std;
bool belong(int x,int y)
{

    if((x<=3)&&(y<=3)&&(x>=0)&&(y>=0))return 1;
    else return 0;
}
int main()
{
    char a[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>a[i][j];
        }
    }
    int r=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i][j]=='x')
            {
                if(belong(i+1,j)&&belong(i+2,j)){

                    if(a[i+1][j]=='x'&&a[i+2][j]=='.')
                    {
                        r=1;
                        break;
                    }
                }
                if(belong(i-1,j)&&belong(i-2,j)){

                    if(a[i-1][j]=='x'&&a[i-2][j]=='.')
                    {
                        r=1;
                        break;
                    }
                }
                if(belong(i,j+1)&&belong(i,j+2)){

                    if(a[i][j+1]=='x'&&a[i][j+2]=='.')
                    {
                        r=1;
                        break;
                    }
                }
                if(belong(i,j-1)&&belong(i,j-2)){

                    if(a[i][j-1]=='x'&&a[i][j-2]=='.')
                    {
                        r=1;
                        break;
                    }
                }
                if(belong(i+1,j+1)&&belong(i+2,j+2)){

                    if(a[i+1][j+1]=='x'&&a[i+2][j+2]=='.')
                    {
                        r=1;
                        break;
                    }
                }
                if(belong(i-1,j-1)&&belong(i-2,j-2)){

                    if(a[i-1][j-1]=='x'&&a[i-2][j-2]=='.')
                    {
                        r=1;
                        break;
                    }
                }
                if(belong(i-1,j+1)&&belong(i-2,j+2)){

                    if(a[i-1][j+1]=='x'&&a[i-2][j+2]=='.')
                    {
                        r=1;
                        break;
                    }
                }
                if(belong(i,j-1)&&belong(i,j-2)){

                    if(a[i+1][j-1]=='x'&&a[i+2][j-2]=='.')
                    {
                        r=1;
                        break;
                    }
                }
                if(belong(i+1,j)&&belong(i+2,j)){

                    if(a[i+1][j]=='.'&&a[i+2][j]=='x')
                    {
                        r=1;
                        break;
                    }
                }
                if(belong(i-1,j)&&belong(i-2,j)){

                    if(a[i-1][j]=='.'&&a[i-2][j]=='x')
                    {
                        r=1;
                        break;
                    }
                }
                if(belong(i,j+1)&&belong(i,j+2)){

                    if(a[i][j+1]=='.'&&a[i][j+2]=='x')
                    {
                        r=1;
                        break;
                    }
                }
                if(belong(i,j-1)&&belong(i,j-2)){

                    if(a[i][j-1]=='x'&&a[i][j-2]=='.')
                    {
                        r=1;
                        break;
                    }
                }
                if(belong(i+1,j+1)&&belong(i+2,j+2)){

                    if(a[i+1][j+1]=='.'&&a[i+2][j+2]=='x')
                    {
                        r=1;
                        break;
                    }
                }
                if(belong(i-1,j-1)&&belong(i-2,j-2)){

                    if(a[i-1][j-1]=='.'&&a[i-2][j-2]=='x')
                    {
                        r=1;
                        break;
                    }
                }
                if(belong(i-1,j+1)&&belong(i-2,j+2)){

                    if(a[i-1][j+1]=='.'&&a[i-2][j+2]=='x')
                    {
                        r=1;
                        break;
                    }
                }
                if(belong(i,j-1)&&belong(i,j-2)){

                    if(a[i+1][j-1]=='.'&&a[i+2][j-2]=='x')
                    {
                        r=1;
                        break;
                    }
                }

            }
        }
    }
    if(r){cout<<"Yes";}
    else cout<<"No";



    return 0;
}
