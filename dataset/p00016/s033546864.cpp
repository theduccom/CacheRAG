//
#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <array>
#include <numeric>
#include <functional>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<utility>
#include<complex>

using namespace std;

#define REP(i,m,n) for(int i=m;i<(n);i++)
#define rep(i,n) REP(i,0,n)
#define ALL(x) (x).begin(),(x).end()

typedef long long ll;
typedef pair<int, int> pii;

// const ll inf = INT_MAX;
const double eps = 1e-10;
const double pi = acos(-1.0);
const int di[][2] = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};

int main(){

	int r;
	double x=0, y=0;
	double ini = pi/2, alpha, theta;
	while(scanf("%d,%lf\n", &r, &theta)){
		if(r == 0 && std::abs(theta - 0.0) < eps){
			// printf("finished\n");
			break;
		}
		else{
			x += r*cos(ini);
			y += r*sin(ini);
			alpha = pi*theta/180;
			ini -= alpha;
		}
	}
	printf("%d\n", (int)x);
	printf("%d\n", (int)y);
	return 0;
}