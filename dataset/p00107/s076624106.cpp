#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <set>
#include <vector>
#include <map>
#define loop(i,a,b) for(int i=a; i<b; i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()

using namespace std;

typedef vector<int> vi;

string const res[] = { "NA", "OK" };

int main(){
    int a, b, c;
    while (cin >> a >> b >> c && a | b | c){
        vi v{ a, b, c };
        double d = 1e50;
        rep(i, 3)rep(j, 3)if (i != j){
            d = min(d, sqrt(v[i] * v[i] + v[j] * v[j]));
        }
        int n; cin >> n;
        rep(i, n){
            double r; cin >> r;
            r *= 2;
            double const eps = 1e-9;
            cout << res[r - eps > d] << endl;
        }
    }
}