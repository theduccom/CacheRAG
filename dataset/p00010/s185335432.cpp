#include<iostream>
#include <cmath>

using namespace std;

void Circle()
{
    double x1, y1;
    double x2, y2;
    double x3, y3;
    double px, py, r;
    int n;
    
    cin>>n;
    
    while(n--)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        
        //AB: (y - y1) / (y2 - y1) = (x - x1) / (x2 - x1);
        //BC:  (y - y2) / (y3 - y2) = (x - x2) / (x3 - x2);
        px = ((y1 - y3) * (y1 * y1 - y2 * y2 + x1 * x1 - x2 * x2) - (y1 - y2) * (y1 * y1 - y3 * y3 + x1 * x1 - x3 * x3)) / (2 * (y1 - y3) * (x1 - x2) - 2 * (y1 - y2) * (x1 - x3));
        
        py = ((x1 - x3) * (x1 * x1 - x2 * x2 + y1 * y1 - y2 * y2) - (x1 - x2) * (x1 * x1 - x3 * x3 + y1 * y1 - y3 * y3)) / (2 * (x1 - x3) * (y1 - y2) - 2 * (x1 - x2) * (y1 - y3));
        
        r = sqrt((x1 - px) * (x1 - px) + (y1 - py) * (y1 - py));
        
        cout.setf(ios::fixed);
        cout.precision(3);
        
        cout<<px<<" "<<py<<" "<<r<<endl;
    }
    
    return;
}

int main()
{
    Circle();
    return 0;
}