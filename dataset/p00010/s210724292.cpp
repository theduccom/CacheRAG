#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <functional>
#include <numeric>
#define fi first
#define se second
using namespace std;
bool value(int y,int x,int R,int C){return 0<=y&&y<R&&0<=x&&x<C;}
typedef pair<int,int> pii;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long > vll;
typedef vector< vi > vvi;
double pie=acos(-1);
int INF=10000009;
int dx[4] = { 0,-1,0,1 };
int dy[4] = { -1,0,1,0 };
int main() {
	double x1,y1,x2,y2,x3,y3,px,py,r;
	double a1,a2,a3,a4;
 	int n,count=0;
 	cin>>n;
	while(true){
		if(count==n) break;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		a1=(y1-y3)*(y1*y1-y2*y2+x1*x1-x2*x2)-(y1-y2)*(y1*y1-y3*y3+x1*x1-x3*x3);
		a2=(y1-y3)*(x1-x2)-(y1-y2)*(x1-x3);
		a2*=2.0;
		a3=(x1-x3)*(x1*x1-x2*x2+y1*y1-y2*y2)-(x1-x2)*(x1*x1-x3*x3+y1*y1-y3*y3);
		a4=(x1-x3)*(y1-y2)-(x1-x2)*(y1-y3);
		a4*=2.0;
		px=a1/a2;
		py=a3/a4;
		r=(px-x1)*(px-x1)+(py-y1)*(py-y1);
		r=pow(r,0.5);
		printf("%.3lf %.3lf %.3lf\n",px,py,r);
		count++;
	}
}