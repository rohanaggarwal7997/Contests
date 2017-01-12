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
    string s;
    cin>>s;
    ll a[8];
    rep(i,0,7)a[i]=0;
    rep(i,0,s.size()-1)
    {
        if(s[i]=='B')a[0]++;
        if(s[i]=='u')a[1]++;
        if(s[i]=='l')a[2]++;
        if(s[i]=='b')a[3]++;
        if(s[i]=='a')a[4]++;
        if(s[i]=='s')a[5]++;
        if(s[i]=='u')a[6]++;
        if(s[i]=='r')a[7]++;
    }
    a[4]/=2;
    a[6]/=2;
    ll mi=a[0];
    rep(i,1,7)
    {
        if(a[i]<mi)mi=a[i];
    }
    cout<<mi;




    return 0;
}
