#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
 
typedef long long ll;
typedef pair<int, int> ii;
 
int main(){

	int n;
	cin >> n;
	while(n--){
		string s1, s2;
		cin >> s1 >> s2;
		
		int carry = 0;
		
		//int mini = min(s1.size(), s2.size());
		int maxi = max(s1.size(), s2.size());
		string ans = "";
		
		REP(i, 0, maxi){
			int sum = carry;
			if(i < s1.size()) sum += (int)(s1[s1.size() - 1 - i] - '0');
			if(i < s2.size()) sum += (int)(s2[s2.size() - 1 - i] - '0');
			ans += ('0' + sum % 10);
			carry = sum / 10;
		}
		if(carry != 0) ans += ('0' + carry);
		reverse(ans.begin(), ans.end());
		if(ans.size() <= 80) cout << ans << endl;
		else cout << "overflow" << endl;
	}
	
	return 0;
}