#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <functional>
#include <sstream>
#include <complex>
#include <climits>
using namespace std;

#define REP(i,a,n) for(int i=(a);i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define EPS 1e-8

/*
	N = 5*(N - 1)
	1 = 0
	2 = 5
	v = 9.8t
	y = 4.9t^2
	y = 4.9(v/9.8)^2 = 4.9 * (v^2 / (9.8)^2 )
*/
int main(){
	double v;
	while(~scanf("%lf",&v)){
		printf("%d\n",(int)(ceil((4.9*v*v/9.8/9.8)/5.0)+EPS)+1);
	}
	return 0;
}