#include <bits/stdc++.h>
using namespace std;

#define fs first
#define sc second
#define pb emplace_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

using pii = pair<int, int>;
using vi = vector<int>;
using lint = long long;

const int inf = 1001001001;
const lint linf = 1001001001001001001ll;
const double eps = 1e-9;
const double EPS = 1e-9;
const int mod = 1e9 + 7;
const int dx[]{0, 1, 0, -1, -1, -1, 1, 1}, dy[]{1, 0, -1, 0, -1, 1, -1, 1};

template<typename T> inline bool chmin(T &a, T b) { if (a > b) { a = b; } return a > b; }
template<typename T> inline bool chmax(T &a, T b) { if (a < b) { a = b; } return a < b; }
template<typename T> inline void print(const T &x, string s = "\n") { cout << x << s; }
template<typename T> inline void print(const vector<T> &v, string s = " ")
{ if (!v.size()) puts(""); rep(i, v.size()) cout << v[i] << (i + 1 == v.size() ? "\n" : s); }
inline bool inside(int y, int x, int H, int W) { return 0 <= y && y < H && 0 <= x && x < W; }
inline lint in() { lint x; std::cin>>x; return x; }

#define equals(a, b) (fabs(a - b) < EPS)

struct Point {
  double x, y;

  Point() {}
  Point(double x, double y) :x(x), y(y){}

  Point operator+(Point p) { return Point(this->x + p.x, this->y + p.y); }
  Point operator-(Point p) { return Point(this->x - p.x, this->y - p.y); }
  Point operator*(double k){ return Point(this->x * k, this->y * k); }
  Point operator/(double k){ return Point(this->x / k, this->y / k); }

  double norm() { return x * x + y * y; }
  double abs()  { return sqrt(norm()); }
};

struct Circle {
  double r;
  Point c;
  Circle() {}
  Circle(Point c, double r) :c(c), r(r){}
  Circle(double x, double y, double r) :c(Point(x, y)), r(r){}
};

double norm(Point a) {
  return a.x * a.x + a.y * a.y;
}

double abs(Point a) {
  return sqrt(norm(a));
}

static const int ICC_SEPARATE = 0;
static const int ICC_CIRCUMSCRIBE = 1;
static const int ICC_INTERSECT = 1;
static const int ICC_INSCRIBE = 1;
static const int ICC_CONTAIN = 2;

int intersectCC(Circle c1, Circle c2){
  int f = 1;
  if(c1.r < c2.r) { f *= -1; swap(c1, c2); }

  double d = abs(c1.c - c2.c);
  double r = c1.r + c2.r;

  if(equals(d, r)) return ICC_CIRCUMSCRIBE;
  if(d > r) return ICC_SEPARATE;
  if(equals(d + c2.r, c1.r)) return ICC_INSCRIBE;
  if(d + c2.r < c1.r) return ICC_CONTAIN * f;
  return ICC_INTERSECT;
}

signed main() {
  int n = in();
  while (n--) {
    Circle c1, c2;
    double x, y, r;
    cin >> x >> y >> r;
    c1 = Circle(x, y, r);

    cin >> x >> y >> r;
    c2 = Circle(x, y, r);

    cout << intersectCC(c1, c2) << endl;
  }
}