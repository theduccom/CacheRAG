#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
 
typedef long long ll;
typedef pair<int, int> ii;

#define EPS 1e-8

int main(){
	
	int n;
	while(cin >> n){
		int w = 512;
		vector<bool> ans(10, false);
		for(int i = 9; i >= 0; i--){
			if(n >= w){
				ans[i] = true;
				n -= w;
			}
			w = w >> 1;
		}
		w = 1;
		bool f = false;
		rep(i, 10){
			if(ans[i]){
				if(f) cout << " ";
				cout << w;
				f = true;
			}
			w = w << 1;
		}
		cout << endl;
	}

	
	return 0;
}