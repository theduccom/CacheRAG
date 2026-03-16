#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = 1e9 + 7;
using pii = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rrep(i, st, n) for (int i = st; i < n; ++i)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
const int mod = 1e9 + 7;
ll power(ll a,ll b){return b?power(a*a%mod,b/2)*(b%2?a:1)%mod:1;}
using Point = complex<double>;
double dot(Point a, Point b) {return real(conj(a) * b);}
double cross(Point a, Point b) {return imag(conj(a) * b);}
const double eps = 1e-10;
int main() {
    double a, b; char ch;
    vector<pair<double, double> > v;
    while (cin >> a >> ch >> b) {
        v.push_back({a, b});
    }
    //sort(v.begin(), v.end());
    //vector<pair<double, double> > line;
    /*
    rrep(i, 1, v.size()) {
        line.push_back({v[0].first - v[i].first, v[0].second - v[i].second});
    }
     */
    double sum = 0;
    rrep(i, 1, v.size() - 1) {
        sum += abs(cross(Point(v[0].first - v[i].first, v[0].second - v[i].second), Point(v[0].first - v[i + 1].first, v[0].second - v[i + 1].second)));
    }
    cout << sum / 2 << endl;
}

