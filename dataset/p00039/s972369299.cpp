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
int num(char c){
	if(c=='I') return 1;
	else if(c=='V') return 5;
	else if(c=='X') return 10;
	else if(c=='L') return 50;
	else if(c=='C') return 100;
	else if(c=='D') return 500;
	else if(c=='M') return 1000;
	else{
		return 0;
	}
}
int y[110];
int main() {
	string s;
	int n=0;
	while(true){
		cin>>s;
		if (cin.eof())break; 
		for(int i=0;i<s.size();i++){
			y[i]=num(s[i]);
		}
		for(int i=0;i<s.size();i++){
			if(y[i]>=y[i+1]){
				n+=y[i];
			}
			else{
				n-=y[i];
			}
		}
		cout<<n<<endl;
		n=0;
		for(int i=0;i<110;i++){
			y[i]=0;
		}
	}
}