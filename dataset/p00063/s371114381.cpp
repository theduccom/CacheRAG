#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string str;
	int ans;
	
	ans = 0;
	while(cin >> str){
		for(int i = 0; i <= str.size() / 2; i++){
			if(str[i] != str[str.size() - (1 + i)]) break;
			else if(i == str.size() / 2) ans++;
		}
	}
	
	cout << ans << endl;

return 0;
}