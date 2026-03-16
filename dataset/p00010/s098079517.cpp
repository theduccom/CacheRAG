#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

double radius(vector<double> center, vector<double> xy){
    double x, y;
    x = xy[0] - center[0];
    y = xy[1] - center[1];
    return sqrt(pow(x,2) + pow(y,2));    
}

vector<double> center(vector<double> coo){
    double a1, b1, c1, a2, b2, c2, x, y;
    a1 = 2 * (coo[2] - coo[0]);
    b1 = 2 * (coo[3] - coo[1]);
    c1 = pow(coo[0],2) - pow(coo[2],2) + pow(coo[1],2) - pow(coo[3],2); 
    
    a2 = 2 * (coo[4] - coo[0]);
    b2 = 2 * (coo[5] - coo[1]);
    c2 = pow(coo[0],2) - pow(coo[4],2) + pow(coo[1],2) - pow(coo[5],2);
    
    x = (b1*c2 - b2*c1) / (a1*b2 - a2*b1);
    y = (c1*a2 - c2*a1) / (a1*b2 - a2*b1);
    
    vector<double> cent = {x,y};
    double rad = radius(cent, coo);
    return {x,y, rad};
    
}



int main(){
    int n;
    vector<double> v = {0,0,0,0,0,0};
    cin >> n;
    while(cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4] >> v[5]){
        vector<double> c = center(v);
        cout << fixed << setprecision(3) << c[0] << " " << c[1] << " " << c[2] << endl;
    }
}