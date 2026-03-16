#include<iostream>
#include<cmath>
#include<complex>
#include<vector>
using namespace std;
typedef complex<double> P;

double length(P a,P b){
    double t=2;
    return sqrt(pow(a.real()-b.real(),t)+pow(a.imag()-b.imag(),t));
}

double heron(double a, double b, double c){
    double z = (a+b+c)/2;
    return sqrt(z*(z-a)*(z-b)*(z-c));
}

int main(){
    vector<P> p(20);
    double x, y;
    int i=0;
    while(scanf("%lf,%lf", &x, &y) != EOF){
        p[i] = P(x,y);
        i++;
    }
    double sum = 0;
    for(int j = 1; j < i-1; j++){
        sum += heron(length(p[0], p[j]), length(p[j], p[j+1]), length(p[j+1], p[0]));
    }
    printf("%.6lf\n", abs(sum));
}

