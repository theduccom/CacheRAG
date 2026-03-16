#include <iostream>
#include <cmath>
using namespace std;
const double dtr=atan(1)/45;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    double x=0, y=0;
    int dir=90;
    while(true){
        int d, a;
        cin>>d;
        cin.ignore();
        cin>>a;
        if(d==0&&a==0) break;
        x+=d*cos(dir*dtr);
        y+=d*sin(dir*dtr);
        dir-=a;
    }
    cout<<(int)x<<'\n'<<(int)y<<'\n';
    return 0;
}