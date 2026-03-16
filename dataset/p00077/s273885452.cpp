#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	while(getline(cin, s)){
		for(int i = 0; i < s.size(); ++i){
			if(s[i] == '@'){
				int n = s[++i] - '0';
				cout << string(n, s[++i]);
			}else{
				cout << s[i];
			}
		}
		cout << endl;
	}
	return 0;
}