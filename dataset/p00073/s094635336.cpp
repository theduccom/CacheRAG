#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    double x,h;
    while(cin>>x>>h){
        if(x==0&&h==0) {
            break;
        }
        cout<<setprecision(10)<<x*x+2*x*sqrt(h*h+x*x/4)<<endl;
    }
    return 0;
}