
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <cmath>
#include <utility>
#include <queue>
#include <stdio.h>
#include <string>
#include <map>
#include <stack>
#include <complex>
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1000000000007
using namespace std;
typedef long long int ll;
typedef complex<double> xy;

int main(){
    vector<xy> inp(21);
    double x,y;
    int n=0;
    string S;
    while (~scanf("%lf,%lf", &x, &y)) {
        inp[n++]=xy(x,y);
    }
    double ans=0.0;
    for (int i=1; i<n-1; i++) {
        xy a = inp[i], b = inp[i+1];
        xy hoge=a-inp[0],piyo=b-inp[0];
        ans += abs((conj(hoge)*piyo).imag())/2.0;
    }
    printf("%.6f\n", ans);
}