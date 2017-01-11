#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    queue <int> qu;
    int sum=0;
    int nu=0;
    int r=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum!=0)r=1;
        if(r==1&&sum==0)
        {
            qu.push(i-1);
            nu++;
            sum=a[i];
        }
    }
    int non=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)non++;
        if(non>=1)break;
    }
    if(non>=1)r=1;
    else r=0;
    if(r)
    {

        if(qu.empty())
        {
        int sum1=a[0];
        for(int i=1;i<n;i++)
        {
            if(sum1!=sum){qu.push(i-1);break;}
            else sum1+=a[i];
        }
        }
        if(qu.empty())
        {
            cout<<"NO";
        }
        else
        {
        cout<<"YES"<<endl;
        qu.push(n-1);
        cout<<qu.size()<<endl;
        int m=0;
        int n;
        while(!qu.empty())
        {
            n=qu.front();
            qu.pop();
            cout<<m+1<<" "<<n+1<<endl;
            m=n+1;
        }


        }



    }
    else cout<<"NO";


    return 0;
}
