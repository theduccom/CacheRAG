#if 0

#endif
#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <algorithm>
#include <assert.h>
#include <complex>
#include <queue>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
using namespace std;
using ll = long long;
ll ll_max = numeric_limits<ll>::max();
ll ll_min = numeric_limits<ll>::min();
int int_max = numeric_limits<int>::max();
int int_min = numeric_limits<int>::min();
double vertices[20][2];
string xy;
double x, y;
typedef complex<double> xy_t;
double cross_product(xy_t a, xy_t b) { 
    return (conj(a) * b).imag(); 
}
double distance(double a[], double b[]) {
    return sqrt(pow(a[0] - b[0], 2) + pow(a[1] - b[1], 2));
}
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);

    double sum = 0;
    int cnt = 0;
    while (cin >> xy) {
        stringstream ss(xy);
        ss >> x;
        ss.ignore();
        ss >> y;

        vertices[cnt][0] = x;
        vertices[cnt][1] = y;
        if (cnt > 1) {
            xy_t o(vertices[0][0], vertices[0][1]);
            xy_t vect1(vertices[cnt - 1][0], vertices[cnt - 1][1]);
            xy_t vect2(x, y);
            vect1 = vect1 - o;
            vect2 = vect2 - o;
            sum += cross_product(vect1, vect2) / 2;
        }
        ++cnt;
    }

    cout << fabs(sum) << endl;

    return 0;
}
