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
struct compare {
    bool operator()(pll p1,
                    pll p2) const {
        return p1.F < p2.F;
    }
};


bool cmp(pair<pll,ll> p1,pair<pll,ll> p2)
{
    return p1.F.S<p2.F.S;
}

bool cmp2(pair<pll,ll> p1,pair<pll,ll> p2)
{
    return p1.F.F>p2.F.F;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n,k;
    cin>>n>>k;
    pair<pll,ll> arr[n];
    rep(i,0,n-1)
    {
        ll a,b;
        cin>>a>>b;
        arr[i].F.F=a;
        arr[i].F.S=b;
        arr[i].S=i;
    }
    if(k==1)
    {
        ll maxdif=0;
        ll posn=0;
        rep(i,0,n-1)
        {
            if((arr[i].F.S-arr[i].F.F)+1>maxdif){maxdif=(arr[i].F.S-arr[i].F.F)+1;posn=i;}
        }
        cout<<maxdif<<endl;
        cout<<posn+1;
        return 0;
    }
    sort(arr,arr+n,cmp);
    multiset <pll,compare> mult;
    rev(i,n-1,n-k)
    {
        mult.insert(pll(arr[i].F.F,i));
    }
    multiset <pll,compare>::iterator it=mult.end();
    it--;
    ll maxdif=arr[n-k].F.S-(*it).F;
    ll finalpos=n-k;
    rev(i,n-k-1,0)
    {

        mult.insert(pll(arr[i].F.F,i));
        multiset <pll,compare>::iterator it1=mult.end();
        it1--;
        mult.erase(it1);
        /*if(i==0)
        {
            cout<<"value is"<<arr[i].F.S<<endl;
            cout<<"multiset is"<<endl;
            for(multiset <pll,compare>::iterator it1=mult.begin();it1!=mult.end();it1++)
            {
                cout<<(*it1).F<<endl;
            }
        }*/
        it1=mult.end();
        it1--;
        if(arr[i].F.S-(*it1).F>maxdif)
        {
        maxdif=arr[i].F.S-(*it1).F;
        finalpos=i;
        }
    }
    sort(arr+finalpos+1,arr+n,cmp2);
    if(maxdif<0)cout<<0<<endl;
    else if(maxdif==0)cout<<1<<endl;
    else cout<<maxdif+1<<endl;
    rev(i,n-1,n-k+1)
    {
        cout<<arr[i].S+1<<" ";
    }
    cout<<arr[finalpos].S+1;
    return 0;
}
