#include<iostream>
#include<vector>
#include<complex>
using namespace std;

typedef pair<double,double>vec;

int main()
{
    double v;
    while(cin>>v){
        double h=4.9*(v/9.8)*(v/9.8);
        int ans=0;
        for(;5*ans-5<h;ans++){}
        cout<<ans<<endl;;
    }
    return 0;
}