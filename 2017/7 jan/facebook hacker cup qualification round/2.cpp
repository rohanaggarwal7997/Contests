#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("lazy_loading.txt");
    fout.open("output.txt");
    int t;
    fin>>t;
    int p=1;
    while(t--)
    {
        int n;
        fin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            fin>>a[i];
        }
        sort(a,a+n);
        int left=n;
        int trip=0;
        for(int i=n-1;i>=0;i--)
        {
            left--;
            if((ceil(50.0/a[i]))-1<=left){
                trip++;
                left-=(ceil(50.0/a[i]))-1;
            }
            if(left<=0)break;
        }
        fout<<"Case #"<<p<<": "<<trip<<endl;
        p++;
    }
    return 0;
}
