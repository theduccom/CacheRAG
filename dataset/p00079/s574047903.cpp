#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>
#include <cmath>
#include <queue>
#include <set>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<double,double> pdd;

double len(pdd a, pdd b) {
	return sqrt((a.first-b.first)*(a.first-b.first) + (a.second-b.second)*(a.second-b.second));
}

int main() {
	vector<pdd> p;
	double x, y;
	while(scanf("%lf,%lf",&x,&y)!=EOF) {
		p.push_back(pdd(x,y));
	}
	double S = 0.0;
	for(int i=1; i+1<p.size(); i++) {
		double a = len(p[0], p[i]);
		double b = len(p[i], p[i+1]);
		double c = len(p[i+1], p[0]);
		double z = (a+b+c)/2.0;
		S += sqrt(z*(z-a)*(z-b)*(z-c));
	}
	printf("%.8lf\n", S);
	return 0;
}