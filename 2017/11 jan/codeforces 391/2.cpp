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
bool cmp(vll v1,vll v2)
{
    return 1;
}
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string a="0";
    ll n,m;
    cin>>n>>m;
    vector <ll> arr[m];
    rep(i,0,m-1)
    {
        arr[i].resize(0);
        arr[i].push_back(0);
    }
    rep(i,1,n)
    {
        ll k;
        cin>>k;
        rep(j,0,k-1)
        {
            ll x;
            cin>>x;
            x--;
            arr[x].push_back(i);
        }
    }
   /* ll siz=arr[0].size();
    rep(i,1,m-1)
    {
        if(arr[i].size()>siz)siz=arr[i].size();
    }
    rep(i,0,m-1)
    {
        rep(j,arr[i].size(),siz-1)
        {
            arr[i].push_back(0);
        }
    }*/

    sort(arr,arr+m);
    ll ans=1;
    rep(i,0,m-1)
    {
        ll j=i;
        while(j<=m-1)
        {
         if(arr[i]==arr[j]) j++;
         else break;
        }
        if(j==m)
        {
            j=m-1;
            ll c=j-i+1;
            rep(h,1,c)
            {
                ans*=h;
                ans%=1000000007;
            }
            break;
        }
        j--;
        ll c=j-i+1;
        rep(h,1,c)
        {
            ans*=h;
            ans%=1000000007;
        }
        i=j;
    }
    cout<<ans;
    return 0;
}
