#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<=b;++i)
#define rev(i,a,b) for(ll i=a;i>=b;i--)
#define pll pair<ll,ll>
#define vll vector<ll>
#define sll set<ll>
#define vpll vector<pll>
#define cons 10000007
using namespace std;
ll *dp;
bool check(ll mid,ll *a,ll n,ll t)
{
    rep(i,0,mid-1){dp[i]=0;}
    rep(i,mid,(2*mid)-2){dp[i]=1;}
    rep(i,(2*mid)-1,10000007)
    {
        if(i%2==0)dp[i]=2*dp[i/2];
        else dp[i]=dp[(i/2)+1]+dp[i/2];
    }
    ll check=n;
    rev(i,t-1,0)
    {
        if (mid<=a[i])
        {check-=dp[a[i]];
        }
        else break;
    }
    if(check>0)return 0;
    else return 1;
}
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n,k;
    cin>>n>>k;
    ll a[n];
    ll sum=0;
    rep(i,0,n-1)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum<k){cout<<-1;return 0;}
    if(sum==k){cout<<1;return 0;}
    sort(a,a+n);
    ll low=0;
    ll high=10000000;
    dp =new ll[10000007];
    while(low<high-1)
    {
        ll mid=(low+high)/2;
        if(check(mid,a,k,n)){
                low=mid;}
        else high=mid;
    }
    if(low==0){cout<<1;return 0;}
    cout<<low;
    return 0;
}
