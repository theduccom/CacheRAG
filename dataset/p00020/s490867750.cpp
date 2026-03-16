#include <iostream>
#include <string>
using namespace std;

int main(){
	string input;
	while(cin && getline(cin, input)){
		string ans = "";
		for(int n=0; n<input.size(); n++){
			if('a'<=input[n]&&input[n]<='z'){
				ans += input[n]-'a'+'A';
			} else {
				ans += input[n];
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}