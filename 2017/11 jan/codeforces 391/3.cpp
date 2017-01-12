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
    ll a[n];
    rep(i,0,n-1)cin>>a[i];
    sort(a,a+n);
    ll maxn=0;
    rep(i,0,n-1)if(a[i]%2==0)maxn++;
    rep(i,3,100000)
    {
        ll num=0;
        ll pos=0;
        for(ll j=i;j<=100000;j+=i)
        {
            while(a[pos]<j)
            {
                pos++;
                if(pos>=n)break;
            }
            while(a[pos]==j)
            {
                pos++;num++;
                if(pos>=n)break;
            }
            if(pos>=n)break;
        }
        if(num>maxn)maxn=num;
    }
    cout<<maxn;
    return 0;
}
