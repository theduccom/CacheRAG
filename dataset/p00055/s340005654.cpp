#include<iostream>
#include<iomanip>
using namespace std;
double a,s;int c;
main()
{
    while(cin>>a)
    {
        s=a;
        for(c=2;c<=10;c++)a=c%2?a/3:a*2,s+=a;
        cout<<fixed<<setprecision(9)<<s<<endl;
    }
}
