#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <sstream>
#include <queue>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <stack>
#include <list>
using namespace std;
#define INF 100000000
typedef long long int lli;
typedef pair<int,int> P;
bool dp[1000001];
bool pn[1000001];

void eratos(bool f[]){
	for(int i=0; i<1000001; ++i){
		f[i]=true;
	}
	pn[0]=false;
	pn[1]=false;
	for(int i=2; i*i<1000001; ++i){
		if(f[i]){
			for(int j=2; i*j<1000001; ++j){
				f[i*j]=false;
			}
		}
	}
}
int main(){
	int n,x;
	eratos(pn);
	while(cin >> n >> x){
		if(n==0&&x==0) break;
		vector<int> cost(n);
		for(int i=0; i<=x; ++i){
			dp[i]=false;
		}
		for(int i=0; i<n; ++i){
			cin >> cost[i];
			dp[cost[i]]=true;
		}
		for(int i=0; i<n; ++i){
			for(int j=0; j<=x; ++j){
				if(dp[j]&&j+cost[i]<=x){
					dp[j+cost[i]]=true;
				}
			}
		}
		bool flag=false;
		int ans;
		for(int i=x; i>=0; --i){
			if(dp[i]&&pn[i]){
				flag=true;
				ans=i;
				break;
			}
		}
		if(flag) {
			cout << ans << "\n";
		} else {
			cout << "NA\n";
		}
	}
	return 0;
}