#include <iostream>
#include <cmath>
#include <complex>
#include <vector>
#include <cstdio>

using namespace std;
typedef complex<double> P;

int main(){
    double x,y;
    vector<P> pol;
    char c;
    while(cin >> x >> c >> y){
        pol.push_back(P(x,y));
    }
    double S = 0;
    for(int i=1; i<pol.size(); i++){
        pol[i] -= pol[0];
    }
    for(int i=1; i<pol.size()-1; i++){
        double s = (conj(pol[i])*pol[i+1]).imag();
        S+=s;
    }
    printf("%.10f\n",abs(S/2));
    return 0;
}
    
        