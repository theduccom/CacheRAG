#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>
 
#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
 
using namespace std;
 
typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;
 
const int INF=1<<29;
const double EPS=1e-9;
 
const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};

int main(){
	int prime[10000] = {0};
	prime[0] = 2;
	prime[1] = 3;
	int count=2;
	int i=4;
	while(count<10000){
		bool flag = true;
		for(int j=2;j*j<=i;j++){
			if(i%j == 0){
				flag = false;
			}
		}
		if(flag){
			prime[count] = i;
			count++;
		}
		i++;
	}
	
	int n;
	while(true){
		cin >> n;
		if(n == 0){
			break;
		}
		int ans = 0;
		for(int j=0;j<n;j++){
			ans += prime[j];
		}
		cout << ans << endl;
	}
}