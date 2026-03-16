#include<iostream>
#include<vector>
#include<cstdio>
#include<cmath>
using namespace std;
vector<double> x, y;
void judline(int i, int j);
double calarea();
double divtri(int i, int j, int k);

int main(){
    x.clear();
    y.clear();
    double tmpx, tmpy;
    while(scanf("%lf,%lf", &tmpx, &tmpy) != EOF){
        x.push_back(tmpx);
        y.push_back(tmpy);
    }
    printf("%f\n", calarea());
    return 0;
}

double calarea(){
    double ans = 0;
    for(int i = 1; i < x.size() - 1; i++){
        ans += divtri(0, i, i + 1);
    }
    return ans;
}

double divtri(int i, int j, int k){
    double a = sqrt(((x[i] - x[j]) * (x[i] - x[j])) + ((y[i] - y[j]) * (y[i]- y[j])));
    double b = sqrt(((x[j] - x[k]) * (x[j] - x[k])) + ((y[j] - y[k]) * (y[j]- y[k])));
    double c = sqrt(((x[k] - x[i]) * (x[k] - x[i])) + ((y[k] - y[i]) * (y[k]- y[i])));
    double z = (a + b + c) / 2;
    double ans = sqrt(z * (z - a) * (z - b) * (z - c));
    return ans;
}