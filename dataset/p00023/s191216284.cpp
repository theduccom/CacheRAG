#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
 
double d(double x, double y, double z, double w){
    double ret;
    ret = pow(x - z , 2) + pow(y - w , 2);
    return sqrtf(ret);
}
 
int main(){
    int n;
    double x[2], y[2], r[2], dd;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> x[0] >> y[0] >> r[0] >> x[1] >> y[1] >> r[1];
        dd = d(x[0], y[0], x[1], y[1]);
        if(dd > (r[0]+r[1])){
            cout << 0 << endl;
        }
        else if(dd + r[0] < r[1]){
            cout << -2 << endl;
        }
        else if (dd + r[1] < r[0]) {
            cout << 2 << endl;
        }
        else {
            cout << 1 << endl;
        }
    }
    return 0;
}