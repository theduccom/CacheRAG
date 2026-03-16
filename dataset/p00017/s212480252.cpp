#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	while(getline(cin, s)){
		string ans;
		int maxim = 0;
		for(int i = 0; i < 26; ++i){
			for(int j = 0; j < s.size(); ++j){
				if(s[j] == 'a')
					s[j] = 'z';
				else if(s[j] == ' ' || !('a' <= s[j] && s[j] <= 'z'))
					continue;
				else
					s[j]--;
			}
			string t("");
			int cnt = 0;
			for(int j = 0; j < s.size(); ++j){
				if(s[j] == ' '){
					if(t == "the" || t == "this" || t == "that")
						cnt++;
					t = "";
				}
				else{
					t += s[j];
				}
			}
			if(maxim < cnt){
				ans = s;
				maxim = cnt;
			}
		}
		cout << ans << endl;
	}
	return 0;
}