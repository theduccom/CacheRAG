#include <bits/stdc++.h>
#define range(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define rep(i,n) range(i,0,n)
using namespace std;

int main(void){
	int ans=0;
	while(1){
		string s;
		cin >> s;
		if(cin.eof())break;
		int n=s.size();
		bool ok=true;
		rep(i,n/2) if(s[i]!=s[n-1-i]) ok=false;
		ans+=ok;
	}
	cout << ans << endl;
	return 0;
}