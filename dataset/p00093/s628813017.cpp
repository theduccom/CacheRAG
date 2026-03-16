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
int main() {
	int a,b;
	int y=0;
	int x=0;
	while(true){
		cin>>a>>b;
		if(a+b==0) break;
		if(y!=0) cout<<endl;
		for(int i=a;i<=b;i++){
			if((i%4==0&&i%100!=0)||i%400==0){
				printf("%d\n",i);
				x++;
			}
			if(i==b&&x==0){
				printf("%s\n","NA");
			}
		}
		x=0;
		y++;
	}
}