#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265
#define DI 50.000000
#define PRE 0.000001
int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("progress_pie.txt");
    fout.open("output.txt");
    int t;
    fin>>t;
    int i=1;
    while(t--)
    {
    double a,b,c;
    fin>>a>>b>>c;
    b-=50;
    c-=50;
    double degree=(a/100)*(360);
    double cdeg=atan2 (c,b) * 180 / PI;
    if(cdeg<=90){cdeg=90-cdeg;}
    else {cdeg=450-cdeg;}
    if(b==0){
            if(c>=0)cdeg=0;
            if(c<0)cdeg=180;
    }
    double dist=sqrt((c*c)+(b*b));
    if(degree==0)
    {
        fout<<"Case #"<<i<<": white"<<endl;
    }
    else
    {

    if((abs(DI-dist)<=PRE||(dist-DI)<=PRE)&&(abs(cdeg-degree)<=(PRE/dist)||(cdeg-degree)<=(PRE/dist)))
    {
        fout<<"Case #"<<i<<": black"<<endl;
    }
    else
    {
        fout<<"Case #"<<i<<": white"<<endl;
    }
    }
    i++;
    }
    return 0;
}
