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
	long double a,s[15],sum=0;
	while(true){
		cin>>a;
		if (cin.eof())break;
		s[0]=a;
		for(int i=1;i<10;i++){
			if(i%2!=0){
				s[i]=2.0*s[i-1];
			}
			else{
				s[i]=s[i-1]/3.0;
			}
		}
		for(int i=0;i<10;i++){
			sum+=s[i];
		}
		fcout(8)<<sum<<endl;
		sum=0;
	}	
}