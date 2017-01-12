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
    ll a[100001];
    rep(i,0,100000)a[i]=0;
    rep(i,0,n-1)
    {
        ll x;
        cin>>x;
        a[x]++;
    }
    if(n==1){cout<<1;return 0;}
    ll maxn=0;
    rep(i,2,100000)
    {
        ll num=0;
        for(ll j=i;j<=100000;j+=i)
        {
            num+=a[j];
        }
        if(num>maxn)maxn=num;
    }
    if(maxn)cout<<maxn;
    else{cout<<1;}
    return 0;
}
