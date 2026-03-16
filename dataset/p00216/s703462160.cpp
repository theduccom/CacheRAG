#include <bits/stdc++.h>

using namespace std;
#define loop(i,a,b) for(int i=(a); i<int(b); i++)
#define rep(i,b) loop(i,0,b)

int main(){
	int n;
	while(cin >> n, n!=-1){
		int ans = 0;
		if(30 < n){ans += (n-30) * 160; n = 30;}
		if(20 < n){ans += (n-20) * 140; n = 20;}
		if(10 < n){ans += (n-10) * 125; n = 10;}
		ans += 1150;
		cout << 4280-ans << endl;
	}
}