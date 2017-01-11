#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<=b;++i)
#define rev(i,a,b) for(ll i=a;i>=b;i--)
#define pll pair<ll,ll>
#define vll vector<ll>
#define sll set<ll>
#define vpll vector<pll>
#define F first
#define S second
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n;
    cin>>n;
    int a[n];
    rep(i,0,n-1)cin>>a[i];
    ll nonzero=0;
    rep(i,0,n-1)
    {
        if(a[i]!=0)nonzero++;
    }
    if(nonzero<1){cout<<"NO";return 0;}
    else cout<<"YES"<<endl;
    ll i=0;
    ll intv=0;
    vpll v;
    while(i<=n-1)
    {
        if(a[i]==0)
        {
            ll j=i;
            while(a[j]==0&&j<n)j++;
            if(j!=n)
            {
                v.push_back(pll(i+1,j+1));
                i=j+1;intv++;continue;
            }
            else
            {
                ll in=v.back().F;
                v.pop_back();
                intv--;
                v.push_back(pll(in,j));
                i=j;intv++;continue;
            }

        }
        if(a[i]!=0&&i<n-1&&a[i+1]==0)
        {
            ll j=i+1;
            while(a[j]==0&&j<n)j++;
            if(j==n){
                    v.push_back(pll(i+1,j));
                    i=j+1;
                    intv++;
                    continue;
            }
            else
            {
                v.push_back(pll(i+1,j));
                i=j;intv++;
                continue;
            }
        }
        if((a[i]!=0&&i<n-1&&a[i+1]!=0)||(i==n-1&&a[i]!=0))
        {
                v.push_back(pll(i+1,i+1));intv++;
        }
        i++;
    }
    cout<<intv<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].F<<" "<<v[i].S<<endl;
    }



    return 0;
}
