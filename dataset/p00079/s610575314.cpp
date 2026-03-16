#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <bitset>
#include <climits>
#include <cassert>

using namespace std;
typedef long long ll;

int main(){

    double v[128][2];
    double x, y;
    
    int n = 0;
    while(scanf("%lf,%lf", &x, &y) != EOF){
        v[n][0] = x; v[n][1] = y;
        ++n;
    }
    
    double s = 0;
    for(int i=1;i<n-1;++i){
        double ts = fabs((v[i][0] - v[0][0])*(v[i+1][1] - v[0][1])
                         -(v[i+1][0] - v[0][0])*(v[i][1] - v[0][1])) / 2;
        s += ts;
    }
    
    printf("%.7f\n", s);
    
    return 0;
}