#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
const ll MOD=1000000007;
const ll INF=1000000010;
const ll LINF=4000000000000000010LL;
const int MAX=310;
const double EPS=1e-8;
int dx[4]={0,0,1,-1};
int dy[4]={-1,1,0,0};
int main(){
	double x,h;
	while(cin>>x>>h,x+h){
		printf("%.8lf\n",x*x+2*(sqrt((x/2)*(x/2)+h*h))*x);
	}
		
}

