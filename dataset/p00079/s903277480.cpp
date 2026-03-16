#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <utility>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
#define all(c) (c).begin(), (c).end()
#define loop(i,a,b) for(ll i=a; i<ll(b); i++)
#define rep(i,b) loop(i,0,b)
#define each(e,c) for(auto&e:c)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple
#define lb lower_bound
#define ub upper_bound
#ifdef DEBUG
#define dump(...) (cerr<<#__VA_ARGS__<<" = "<<(DUMP(),__VA_ARGS__).str()<<" ["<<__LINE__<<"]"<<endl)
struct DUMP:ostringstream{template<class T>DUMP &operator,(const T&t){if(this->tellp())*this<<", ";*this<<t;return *this;}};
#else
#define dump(...)
#endif
template<class T> ostream& operator<<(ostream& os, vector<T> const& v){
    rep(i,v.size()) os << v[i] << (i+1==v.size()?"":" ");
    return os;
}

double dist(double x0, double y0, double x1, double y1){
    double dx = x0-x1, dy = y0-y1;
    return sqrt(dx*dx + dy*dy);
}

double area(double a, double b, double c){
    double z = (a+b+c)/2;
    return sqrt(z*(z-a)*(z-b)*(z-c));
}

int main(){
    int n = 0;
    double x[22], y[22];
    while(scanf("%lf,%lf\n", &x[n],&y[n])!=EOF) n++;
    double S = 0;
    rep(i,n-2){
        S += area(dist(x[n-1],y[n-1],x[i],y[i]),
                  dist(x[n-1],y[n-1],x[i+1],y[i+1]),
                  dist(x[i],y[i],x[i+1],y[i+1]));
    }
    printf("%.10lf\n",S);
}