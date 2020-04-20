#include <iostream>
#include <cmath>//cos,sqrt
#include <iomanip>//setprecision
using namespace std;
#define PI 2*acos(0)
int main()
{
    double s,a;
    string str;
    while(cin>>s>>a>>str)
    {
        if(a>180) a=360-a;
        double r=6440+s;
        double arc,chord;
        if(str=="min")
        {
            a/=60; //degree=min/60
        }
        arc=2*PI*r*a/360.;
        chord=sqrt(r*r+r*r-2*r*r*cos(PI*a/180.));
        cout<<fixed<<setprecision(6)<<arc<<" "<<chord<<endl;
    }
    return 0;
}
