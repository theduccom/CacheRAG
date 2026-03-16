#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <complex>
using namespace std;
#define INF 100000000

typedef long long ll;
typedef complex<double> xy_t;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};
xy_t P[110];
double cross_product(xy_t a, xy_t b) {return (conj(a)*b).imag();}

int main(void) {
    int N = 0;
    double x, y;
    while (~scanf("%lf,%lf", &x, &y)) {
        P[N++] = xy_t(x, y);
    }
    double sum = 0.0;
    for (int i = 0; i+2 < N; i++) {
        xy_t a = P[0], b = P[(i+1)%N], c = P[(i+2)%N];
        xy_t x = b-a, y = c-a;
        sum += abs(cross_product(x, y));
    }
    printf("%.10lf\n", abs(sum) / 2);
    return 0;
}