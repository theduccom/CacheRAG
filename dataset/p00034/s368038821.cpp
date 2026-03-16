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
#include <iomanip>
#define fi first
#define se second
#define fcout(n) cout<<fixed<<setprecision((n))
#define cinl(str) getline(cin,(str))
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
double d[15];
int main() {
	double l[15],v[5];
	char c[15];
	double x=0.0,y;
	int ans;
	while(true){
		cin>>l[0]>>c[0]>>l[1]>>c[1]>>l[2]>>c[2]>>l[3];
		cin>>c[3]>>l[4]>>c[4]>>l[5]>>c[5]>>l[6]>>c[6];
		cin>>l[7]>>c[7]>>l[8]>>c[8]>>l[9]>>c[9]>>v[0];
		cin>>c[10]>>v[1];
		if (cin.eof())break;
		x=0.0;
		for(int i=0;i<=9;i++){
			x+=l[i];
		}
		for(int i=1;i<=10;i++){
			d[i]=0.0;
		}
		double t;
		t=x/(v[0]+v[1]);
		y=v[0]*t;
		for(int i=1;i<=10;i++){
			for(int j=0;j<i;j++){
				d[i]+=l[j];
			}
		}
		for(int i=1;i<=10;i++){
			if(y<=d[i]){
				ans=i;
				break;
			}
		}
		cout<<ans<<endl;
	}
}