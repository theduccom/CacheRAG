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
	double x;
	double n=1.0;
	int N;
	while(true){
		cin>>x;
		if (cin.eof())break;
		while(true){
			double t;
			t=5.0*(n-1);
			t/=4.9;
			t=pow(t,0.5);
			if(9.8*t>=x) break;
			n+=1.0;
		}
		N=n;
		cout<<N<<endl;
		n=1.0;
	}
}