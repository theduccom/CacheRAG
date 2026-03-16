#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i,a,b) for(int i = (a); i < (b); i++)

using namespace std;

typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;

const int INF=1<<29;
const double EPS=1e-9;

const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};

typedef complex<double> P;
typedef vector<P> G;

/* 内積 */
double dot(const P& a, const P& b) {
	return real(conj(a)*b);
}
/* 外積 */
double cross(const P& a, const P& b) {
	return imag(conj(a)*b);
}
/*多角形の面積*/
double areaG(const G& g){
	double A = 0;
	for(int i =0;i <g.size();i++){
		A +=cross(g[i],g[(i+1)%g.size()]);
	}
	return abs(A/2.0);
}
int main(){
	G g;
	double x,y;
	char c;
	while(cin>>x>>c>>y){
		g.push_back(P(x,y));
	}
	printf("%.8f\n",areaG(g));
	return 0;
}