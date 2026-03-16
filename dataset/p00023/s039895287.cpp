#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

//２点間の距離
double distance(double x1, double y1, double x2, double y2) {
    double diffx = abs(x1 - x2), diffy = abs(y1 - y2);
    return(sqrt(diffx*diffx + diffy*diffy));
}

//条件
//2
bool isBInclude(double x1, double y1, double r1, double x2, double y2, double r2) {
    return(distance(x1, y1, x2, y2) < r1 - r2);
}
//-2
bool isAInclude(double x1, double y1, double r1, double x2, double y2, double r2) {
    return(distance(x1, y1, x2, y2) < r2 - r1);
}
//1
bool isIntersect(double x1, double y1, double r1, double x2, double y2, double r2) {
    return(distance(x1, y1, x2, y2) <= r1 + r2);
}
//0
bool isFar(double x1, double y1, double r1, double x2, double y2, double r2) {
    return(distance(x1, y1, x2, y2) > r1 + r2);
}


int main(void) {
    int num; cin >> num;
    
    for(int r = 0; r < num; r++) {
        double x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >>  r1 >>  x2 >>  y2 >> r2;
        if(isBInclude(x1, y1, r1, x2, y2, r2)) cout << "2" << endl;
        else if(isAInclude(x1, y1, r1, x2, y2, r2)) cout << "-2" << endl;
        else if(isIntersect(x1, y1, r1, x2, y2, r2)) cout << "1" << endl;
        else if(isFar(x1, y1, r1, x2, y2, r2)) cout << "0" << endl;
    }
    return(0);
}