#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <complex>
#include <functional>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

#define dump(n) cout<<"# "<<#n<<"="<<(n)<<endl
#define debug(n) cout<<__FILE__<<","<<__LINE__<<": #"<<#n<<"="<<(n)<<endl
#define repi(i,a,b) for(int i=int(a);i<int(b);i++)
#define rep(i,n) repi(i,0,n)
#define iter(c) __typeof((c).begin())
#define tr(c,i) for(iter(c) i=(c).begin();i!=(c).end();i++)
#define allof(c) (c).begin(),(c).end()
#define mp make_pair

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int,int> pii;

pair<double,double> solve(double a,double b,double c,double d,double e,double f)
{
	return mp((c*e-b*f)/(a*e-b*d),(a*f-c*d)/(a*e-b*d));
}

int main()
{
	int n;
	cin>>n;
	rep(i,n){
		vector<double> x(3),y(3);
		rep(j,3)
			cin>>x[j]>>y[j];
		double x0=x[0],y0=y[0];
		rep(j,3){
			x[j]-=x0;
			y[j]-=y0;
		}
		pair<double,double> res=solve(
			2*x[1],2*y[1],x[1]*x[1]+y[1]*y[1],
			2*x[2],2*y[2],x[2]*x[2]+y[2]*y[2]);
		printf("%.3f %.3f %.3f\n",res.first+x0,res.second+y0,hypot(res.first,res.second));
	}
	
	return 0;
}