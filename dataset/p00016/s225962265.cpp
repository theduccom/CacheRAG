#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int L,C,W=0;
    double x=0,y=0;
    char c;
    while(1){
        cin >> L >> c >> C;
        if(!(L||C)){
            break;
        }
        x=x+(double)L*sin(W/180.0*M_PI);
        y=y+(double)L*cos(W/180.0*M_PI);
        W+=C;
    }
    cout << (int)x << "\n" << (int)y << endl;
}