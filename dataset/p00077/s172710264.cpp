#include <iostream>
#include <string>
using namespace std;

int main() {
	
	
	string str;
	
	while(cin >> str)
	{
		string ans;
	
		for(unsigned int i = 0; i < str.size(); i++){
			if(str[i] == '@'){
				int t = str[i + 1] - '0';
				char s = str[i + 2];
				for(int j = 0; j < t; j++)
					ans += s;
				
				i += 2;
			}
			else 
				ans += str[i];
		}
	
		cout << ans << endl;
	}
	
	return 0;
}