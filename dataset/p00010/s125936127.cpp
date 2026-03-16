#include <iostream>
#include <cstdio>
#include <complex>
#include <vector>
#define EPS 1e-10
#define EQ(a, b) (abs((a) - (b)))
using namespace std;

typedef complex<double> P;
double cross(P a, P b) {
    return(a.real() * b.imag() - a.imag() * b.real());
}

int main(void) {
    int num; cin >> num;
    
    for(int r = 0; r < num; r++) {
        vector<P> vec;
        for(int c = 0; c < 3; c++) {
            double x, y; cin >> x >> y;
            vec.push_back(P(x, y));
        }
        //中点
        P mid1((vec[0] + vec[1]) / 2.0), mid2((vec[1] + vec[2]) / 2.0);
        //法線ベクトル
        //cout << mid1  << " " << mid2 << endl;
        P cross1((vec[0] - vec[1]) * P(0, 1)), cross2((vec[1] - vec[2]) * P(0, 1));
        //cout << cross1  << " " << cross2 << endl;
        //交点
        P ans(mid1 + cross1 * cross(cross2, (mid2 - mid1)) / cross(cross2, cross1));
        double half_r = abs(ans - vec[0]);
        printf("%.3f %.3f %.3f\n", ans.real(), ans.imag(), half_r);
    }
    return(0);
}