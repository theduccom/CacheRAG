#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)n; ++i)
#define repf(i, f, l) for(int i = f; i < (int)l; ++i)

#ifdef ONLINE_JUDGE
#define DEBUG false
#else
#define DEBUG true
#endif

#define pb emplace_back
#define lb lower_bound
#define ul unsigned long
#define ull unsigned long long
#define ll long long
#define INF 1000000007
#define MOD 1000000007
#define fs first
#define sd second

#define ALL(c) (c).begin(),(c).end()

#define DBG0(x)    {if(DEBUG){ cout << #x << ": " << x << "\t"; }}
#define DBG(x)     {if(DEBUG){DBG0(x); cout << endl;}}
#define DBG2(x, y) {if(DEBUG){DBG0(x); DBG(y);}}
#define DBG3(x, y, z) {if(DEBUG){DBG0(x); DBG2(y, z);}}
#define DBG4(w, x, y, z) {if(DEBUG){DBG0(w); DBG3(x, y, z);}}

template <class T>
ostream& operator<<(ostream& os, vector<T> xs){ for(T x: xs) os << x << ' '; return os; }
template <class S, class T>
ostream& operator<<(ostream& os, pair<S,T> st){ os << "(" << st.first << "," << st.second <<")"; return os; }

typedef vector<int> vint;
typedef vector<ll> vll;
typedef vector<ul> vul;
typedef vector<ull> vull;
typedef vector<bool> vbl;
typedef pair<int, int> pii;

/* Library starts here */
const double EPS = 1.0e-14;
typedef complex<double> Point;
/* Line is represented as (a, b, c) of ax + by + c = 0 */
typedef tuple<double, double, double> Line;

istream& operator>>(istream& is, Point &pt){
    double a, b;
    is >> a >> b;
    pt.real(a); pt.imag(b);
    return is;
}

ostream& operator<<(ostream& os, const Point &pt){
    os << make_pair(pt.real(), pt.imag());
    return os;
}

ostream& operator<<(ostream& os, const Line &l){
    os << "(" << get<0>(l) << "," << get<1>(l) << "," << get<2>(l) << ")";
    return os;
}

inline double cross(const Point &a, const Point &b){
    return (a.real()*b.imag() - a.imag()*b.real());
}

inline double myarg(Point &a){
    double ret = arg(a);
    return (ret >= 0 ? ret : ret + 2*M_PI);
}

inline double signed_area(const Point &a, const Point &b, const Point &c){
    Point ab = b - a;
    Point ac = c - a;
    return cross(ab, ac) / 2.0;
}

inline bool intersect(const Point &a1, const Point &a2, const Point &b1, const Point &b2) {
  return ((cross(a2-a1, b1-a1) * cross(a2-a1, b2-a1) < EPS) &&
          (cross(b2-b1, a1-b1) * cross(b2-b1, a2-b1) < EPS));
}

void sort_by_arg(vector<Point> &pts){
    sort(pts.begin(), pts.end(), [](Point a, Point b){ return (myarg(a) < myarg(b)); });
}

double area(vector<Point> &vs){
    int n = vs.size();
    vector<Point> pts(n - 1);
    rep(i, n - 1) pts[i] = vs[i + 1] - vs[0];
    sort_by_arg(pts);
    double ans = 0.0;
    rep(i, n - 1) ans += cross(vs[i], vs[i + 1]);
    return ans / 2.0;
}

inline Line make_line(const Point &a, const Point &b){
    return make_tuple(a.imag() - b.imag() , b.real() - a.real(), -(a.imag() * b.real() - a.real() * b.imag()));
//  return make_tuple(a.imag() - b.imag() , b.real() - a.real(), a.imag() * b.real() - a.real() * b.imag());
}

inline Line orthogonal_line(const Line &l, const Point &p){
    return make_tuple(get<1>(l), -get<0>(l), get<0>(l) * p.imag() - get<1>(l) * p.real());
}

inline bool is_parallel(const Line &l0, const Line &l1){
    return ((get<0>(l0)*get<1>(l1) - get<1>(l0)*get<0>(l1)) == 0.0);
}

inline Point intersection_point(const Line &l0, const Line &l1){
    const double A = get<0>(l0);
    const double B = get<1>(l0);
    const double C = get<0>(l1);
    const double D = get<1>(l1);
    const double U = get<2>(l0);
    const double V = get<2>(l1);
    const double det = A*D - B*C;
    return Point((-D*U + B*V) / det,
                 ( U*C - A*V) / det);
}

inline Point rotate(const Point &p, const double theta){
    double ct = cos(theta);
    double st = sin(theta);
    return Point(ct * p.real() - st*p.imag(), st*p.real() + ct*p.imag());
}

/* End of the Library */
const Point O(0,0);
int main(void){
    vector<Point> pts;
    for(string str; getline(cin, str); ){
        rep(i, str.length()) if(str[i] == ',') str[i] = ' ';
        Point tmp;
        istringstream iss(str);
        iss >> tmp;
        pts.pb(tmp);
    }
    double ans = 0.0;
    rep(i, pts.size() - 1) ans+= signed_area(O, pts[i], pts[i + 1]);
    ans += signed_area(O, pts.back(), pts[0]);
    printf("%.9lf\n", abs(ans));
    return 0;
}