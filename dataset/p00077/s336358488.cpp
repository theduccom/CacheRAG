#include <iostream>
#include <string>
using namespace std;

int main(){
	int sum = 0, n = 0;
	string s, ans;

	while( getline(cin,s) ){
		ans = "";
		for(int i=0 ; i<s.size() ; i++){
			if(s[i]=='@'){
				for(int j=0 ; j<(s[i+1]-'0') ; j++){
					ans += s[i+2];
				}
				i += 2;
			}else{
				ans += s[i];
			}
		}
		cout << ans << endl;
	}
	
	return 0;
}