#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <cmath>
#include <complex>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0;i<int(n);++i)
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define EPS 1e-8

static const double PI=6*asin(0.5);
typedef complex<double> P;
typedef long long ll;

vector<double> a;
double t;

int main(){
	while(cin>>t){
		a.PB(t);
		rep(i,5){
			a.PB(a[a.size()-1]*2.0);
			a.PB(a[a.size()-1]/3.0);
		}
		double s=0;
		rep(i,10){
			s+=a[i];
			//printf("%d = %.10lf\n",i+1,a[i]);
		}
		printf("%.8lf\n",s);
		a.clear();
	}
	return 0;
}