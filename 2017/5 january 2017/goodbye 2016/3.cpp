#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int r=0;
    cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
        if(i==0)a[i][2]=a[i][0];
        else a[i][2]=a[i-1][2]+a[i][0];
    }
    queue <int> q;
    int cu=a[0][1];
    for(int i=1;i<n;i++)
    {
        if(a[i][1]!=cu)
        {
            q.push(i);
            cu=a[i][1];
        }
    }
    int rating[q.size()];
    int p=0;
    while(!q.empty())
    {
        int i=q.pop();
        if(a[i-1][1]==1&&a[i-1][2]<=0){r=1;break;}
        if(a[i-1][1]==2&&a[i-1][2]>=0){r=1;break;}
        if(a[i-1][1]==1&&a[i-1][2]<0){r=2;
            rating[p]=1899+
            p++;
            continue;
        }




    }


    switch(r)
    {
        case 0:{cout<<"Infinity";}
        case 1:{cout<<"Impossible";}
        case 2:{}
    }


    return 0;
}
