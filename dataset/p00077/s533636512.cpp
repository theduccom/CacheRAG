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
	string s,t;
	while(true){
		cin>>s;
		if (cin.eof())break;
		t="";
		for(int i=0;i<s.size();i++){
			if(s[i]!='@'){
				t+=s[i];
			}
			else{
				for(int j=0;j<s[i+1]-'0';j++){
					t+=s[i+2];
				}
				i+=2;
			}
		}
		cout<<t<<endl;
	}
}