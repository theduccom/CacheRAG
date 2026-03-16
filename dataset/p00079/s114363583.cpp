#include <algorithm>
#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <iomanip>
#include <numeric>
#include <tuple>
#include <bitset>
#include <complex>
#define _USE_MATH_DEFINES
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> plglg;
typedef tuple<int, int, int> tiii;
typedef tuple<ll, ll, ll> tlglglg;
typedef complex<double> xy_t;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
double pi = 3.141592653589793;
ll mod = 1000000007;
int intmax = 2147483647;
int intmin = -2147483648;
ll llmax = 9223372036854775807;
ll llmin = -9223372036854775807;
ll inf = llmax / 2;

double cross_product (xy_t a, xy_t b) {
    return (conj(a) * b).imag();
}

xy_t P[110];

int main() {
    int N = 0;
    double x, y;
    while (~scanf("%lf,%lf", &x, &y)) {
        P[N] = xy_t(x, y);
        N++;
    }
    double ans = 0;
    xy_t a = P[0];
    for (int i = 0; i < N - 2; i++) {
        xy_t b = P[i + 1], c = P[i + 2];
        ans += 0.5 * cross_product(b - a, c - a);
    }
    printf("%.6f\n", abs(ans));
}

