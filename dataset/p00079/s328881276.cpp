#include <iostream>
#include <vector>
#include <complex>
#include <iomanip>

using namespace std;

typedef complex<double> point;

double cross(point a,point b){
    return imag(conj(a)*b);
}

double triangle_area(point a,point b,point c){
    return cross(b-a,c-a)/2;
}

double vertex_area(vector<point> v){
    double ret = 0;
    for(int i=1;i<v.size()-1;i++){
        ret += triangle_area(v[0],v[i],v[i+1]);
    }
    return ret;
}

int main(){
    cout << fixed << setprecision(10);
    vector<point> v;
    double x,y;
    char c;
    while(cin >> x >> c >> y){
        v.push_back(point(x,y));
    }
    cout << abs(vertex_area(v)) << endl;
    return 0;
}