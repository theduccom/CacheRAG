#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i=(b) - 1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<(n);i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)

#define PB push_back
#define INF (1<<29)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define CLR(a) memset(a,0,sizeof(a))
const int dx[] = {-1,0,0,1},dy[] = {0,1,-1,0};

typedef long long int ll;

using namespace std;

int main(){
    vector< pair<double,double> > v;
    while(true){
	string s,s1,s2;
	cin >> s;
	if(cin.eof()) break;
	int x = -1;
	REP(i,s.size()){
	    if(s[i] == ','){
		s1 = s.substr(x+1,i-x-1);
		s2 = s.substr(i+1,s.size()-i-1);
		break;
	    }
	}
	v.PB( pair<double,double>(stod(s1),stod(s2)) );
    }
    double ans = 0.0;
    REP(i,v.size()-2){
	double a,b,c,z;
	double ax,ay,bx,by,cx,cy;
	ax = v[0].first - v[i+1].first;
	ay = v[0].second - v[i+1].second;
	bx = v[i+1].first - v[i+2].first;
	by = v[i+1].second - v[i+2].second;
	cx = v[i+2].first - v[0].first;
	cy = v[i+2].second - v[0].second;
	a = sqrt(ax*ax + ay*ay);
	b = sqrt(bx*bx + by*by);
	c = sqrt(cx*cx + cy*cy);
	z = (a+b+c)/2.0;
	ans += sqrt(z*(z-a)*(z-b)*(z-c));
    }
    printf("%.6lf\n",ans);
    return 0;
}