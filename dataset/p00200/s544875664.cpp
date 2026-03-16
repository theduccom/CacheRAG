#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<queue>
#include<stack>
#include<complex>
#include<utility>
#include<cmath>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define pi acos(-1)
#define all(v) v.begin(),v.end()
using namespace std;

const double eps = 1e-8;
const double INF = 1e8;

typedef pair<int,int> P;
typedef double Real;
typedef complex<Real> Point;
typedef vector<Point> G;

double cross(const Point& a,const Point& b){//calculate ad-bc(vector product)
	return imag(conj(a)*b);
}

struct L:public vector<Point>{//line data
	L(const Point &a,const Point &b){
		push_back(a);
		push_back(b);
	}
};

int main(){
	int a,b,c,t;
	int n,m,q;
	while(cin>>n>>m,n||m){
		int cost[m+1][m+1];
		int ti[m+1][m+1];
		rep(i,m+1)rep(j,m+1){
			cost[i][j]=ti[i][j]=INF;
		}
		rep(i,n){
			cin>>a>>b>>c>>t;
			cost[a][b]=cost[b][a]=c;
			ti[a][b]=ti[b][a]=t;
		}
		rep(k,m+1)rep(i,m+1)rep(j,m+1){cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);ti[i][j]=min(ti[i][j],ti[i][k]+ti[k][j]);}
		cin>>q;
		int check;
		rep(i,q){
			cin>>a>>b>>check;
			if(!check)cout<<cost[a][b]<<endl;
			else cout<<ti[a][b]<<endl;
		}
	}
	return 0;
}