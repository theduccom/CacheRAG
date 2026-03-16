#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
	int n;
	cin >> n;
	while(n--){	
		string s;
		int ans = 0 , cur = 0 , out = 0;
		while(out != 3 && cin >> s){
			if(s=="HIT"){
				cur = (cur << 1)+1;
				if(cur&8)cur -= 8 , ans++;
			}else if(s=="HOMERUN"){	
				ans += !!(cur&1) + !!(cur&2) + !!(cur&4) + 1;
				cur = 0;
			}else if(s=="OUT"){
				out++;
			}
		}
		cout << ans << endl;
		
	}
}