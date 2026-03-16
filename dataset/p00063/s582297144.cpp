#include <iostream>
using namespace std;

int main(){
	string s;
	int ans = 0;
	while(cin >> s){
		//if(s == "fuck")break;
		int i = 0, size = s.size()/2;
		for(i;i < size && s[i] == s[s.size()-i-1];i++);
		if(i == size)ans++;
	}
	cout << ans << endl;
	return 0;
}