#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.setf(ios::fixed);
    cout.precision(3);
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        double x1, y1, x2, y2, x3, y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        double m=(y1*(x2-x3)+y2*(x3-x1)+y3*(x1-x2))*2;
        double cx=(x1*x1+y1*y1)*(y2-y3) +(x2*x2+y2*y2)*(y3-y1) +(x3*x3+y3*y3)*(y1-y2);
        double cy=(x1*x1+y1*y1)*(x2-x3) +(x2*x2+y2*y2)*(x3-x1) +(x3*x3+y3*y3)*(x1-x2);
        double x=-cx/m;
        double y=cy/m;
        double r=sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
        cout<<x<<' '<<y<<' '<<r<<'\n';
    }
    return 0;
}