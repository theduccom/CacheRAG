#include<iostream>
#include<string>
using namespace std;

int main(){
	string input;
	int ans = 0;
	while(cin >> input){
		bool isPalindrome = true;
		for(int i=0; i < input.size(); i++){
			if(input[i] != input[input.size() - i-1]) isPalindrome = false;
		}
		if(isPalindrome) ans++;
	}
	cout << ans << endl;
}