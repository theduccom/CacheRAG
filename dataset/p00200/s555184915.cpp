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
const double INF = 1e5;

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
	int n,m;
	while(1){
		cin>>n>>m;
		if(!n && !m)break;
		long long cost[m+1][m+1],ti[m+1][m+1];
		rep(i,m+1)rep(j,m+1)cost[i][j]=ti[i][j]=INF;
		int a,b,c,t;
		rep(i,n){
			cin>>a>>b;
			cin>>cost[a][b]>>ti[a][b];
			cost[b][a]=cost[a][b];
			ti[b][a]=ti[a][b];
		}
		loop(k,1,m+1){
			loop(i,1,m+1){
				loop(j,1,m+1){
					cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
					ti[i][j]=min(ti[i][j],ti[i][k]+ti[k][j]);
				}
			}
		}
		int k,p,q,r;
		cin>>k;
		rep(i,k){
			cin>>p>>q>>r;
			if(r==0){
				cout<<cost[p][q]<<endl;
			}else{
				cout<<ti[p][q]<<endl;
			}
		}
	}
	return 0;
}