#include <iostream>
#include <string>
using namespace std;

int main(){
	int ans = 0;
	bool flag;
	string s;

	while( getline(cin,s) ){
		flag = true;
		for(int i=0 ; i<s.size() ; i++){
			if(s[i]!=s[s.size()-i-1]){
				flag = false;
				break;
			}
		}
		if(flag) ans++;
	}
	cout << ans << endl;
	
	return 0;
}