#include<iostream>
#include<cstdio>
#include<complex>
#include<vector>
#include<cmath>
using namespace std;
typedef complex<double> P;
vector<P> coor;
double calarea();
double divtri(int i, int j);

int main(){
    double tmpx, tmpy;
    while(scanf("%lf,%lf", &tmpx, &tmpy) != EOF){
        coor.push_back(P(tmpx, tmpy));
    }
    printf("%f\n", calarea());
    return 0;
}

double calarea(){
    double ans = 0;
    for(int i = 0; i < coor.size() - 1; i++){
        ans += divtri(i, i + 1);
    }
    ans += divtri(coor.size() - 1, 0);
    return ans;
}

double divtri(int i, int j){
    return abs(imag(conj(coor[i]) * coor[j])) / 2;
}