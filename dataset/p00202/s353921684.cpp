#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <queue>
#include <stack>
#include <complex>
#include <utility>
#include <set>
#include <cmath>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define pi acos(-1)
#define all(v) v.begin(),v.end()
#define EPS (1e-10)
#define EQ(a,b) (abs((a)-(b))<EPS)
#define EQV(a,b) (EQ((a).real(),(b).real()) && EQ((a).imag(),(b).imag()))
using namespace std;
typedef pair<int,int> point;
typedef complex<double> P;
typedef long long ll;

const double eps = 1e-8;
const double INF = 1e12;


double dot(P a,P b){
	return a.real()*b.real()+a.imag()*b.imag();
}
double cross(P a,P b){
	return a.real()*b.imag()-a.imag()*b.real();
}

bool is_orthogonal(P a1,P a2,P b1,P b2){
	return EQ(dot(a1-a2,b1-b2),0.0);
}
bool is_parallel(P a1,P a2,P b1,P b2){
	return EQ(cross(a1-a2,b1-b2),0.0);
}

bool is_point_on_line(P a,P b,P c){
	return EQ(cross(b-a,c-a),0.0);
}

bool is_point_on_linesegment3(P a,P b,P c){
	return (abs(a-c)+abs(c-b)<abs(a-b)+EPS);
}

double distance_l_p(P a,P b,P c){
	return abs(cross(b-a,c-a))/abs(b-a);
}


double distance_ls_p(P a,P b,P c){
	if(dot(b-a,c-a)<EPS)return abs(c-a);
	if(dot(a-b,c-b)<EPS)return abs(c-b);
	return abs(cross(b-a,c-a))/abs(b-a);
}

bool prime[1000001];

int main(){
	int n,x;
	rep(i,1000001)prime[i]=true;
	prime[0]=prime[1]=false;
	for(int i=2;i<1001;i++){
		for(int j=2;i*j<1000000;j++){
			prime[i*j]=false;
		}
	}
	while(1){
		cin>>n>>x;
		if(n==0 && x==0)break;
		int menu[n];
		rep(i,n)cin>>menu[i];
		bool cost[1000001];
		rep(i,1000001)cost[i]=false;
		cost[0]=true;
		rep(i,x+1){
			if(cost[i]){
				rep(j,n)if(i+menu[j]<=x)cost[i+menu[j]]=true;
			}
		}
		bool check=true;
		for(int i=x;i>=2;i--){
			if(cost[i]==1 && prime[i]==1){
				cout<<i<<endl;
				check=false;
				break;
			}
		}
		if(check)cout<<"NA"<<endl;
	}
	return 0;
}