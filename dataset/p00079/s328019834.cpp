#include <iostream>
#include <complex>
#include <cmath>
#include <vector>

using namespace std;

typedef complex<double> xy_t;

vector< xy_t> v;

double heron(xy_t p1, xy_t p2, xy_t p3){
    double a = abs(p2-p1);
    double b = abs(p3-p2);
    double c = abs(p1-p3);
    double s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main(){
    double x,y;
    char c;
    while(cin >> x >> c >> y){
        complex<double> tmp(x,y);
        v.push_back(tmp);
    }
    double sum = 0;
    for(int i=1;i<v.size()-1;i++){
        sum += heron(v[0],v[i],v[i+1]);
    }
    cout << sum << endl;
}