#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
	int n;
	while(cin >> n , n){
		pair<int,int> ans;
		rep(i,n){
			int a,b,c;
			cin >> a >> b >> c;
			ans = max( ans , make_pair(b+c,a));
		}
		cout << ans.second << " " << ans.first << endl;
	}
}