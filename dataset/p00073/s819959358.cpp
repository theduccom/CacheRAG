#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double h,x;
main()
{
    while(cin>>x>>h,x)
    {
        cout<<fixed<<setprecision(9)<<x*x+2*x*hypot(x/2,h)<<endl;
    }
}
