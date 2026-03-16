#include<iostream>
#include<algorithm>
#include<cctype>
#include<cstring>
#include<cstdlib>
#include<vector>
#include<string>
#include<cmath>
using namespace std;
#define REP(i, j) for(int i = 0; i < j; i++)
#define FOR(i, j, k) for(int i = j; i < k; i++)
const int N = 2;

int main(){
    int n;
    cin >>n;
    REP(z, n){
        double x[N], y[N], r[N];
        REP(i, N) cin >>x[i] >>y[i] >>r[i];
        double d = sqrt((x[0] - x[1]) * (x[0] - x[1]) + (y[0] - y[1]) * (y[0] - y[1]));
        if(r[0] + r[1] < d) cout <<0 <<endl;
        else if(r[0] > r[1] && d < r[0] - r[1]) cout <<2 <<endl;
        else if(r[1] > r[0] && d < r[1] - r[0]) cout <<-2 <<endl;
        else cout <<1 <<endl;
    }
    return 0;
}