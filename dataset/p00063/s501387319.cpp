#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int ans = 0;
	string str1;
	while(cin >> str1){
		string str2(str1);
		reverse(str2.begin(),str2.end());
		if(str1 == str2) ans++;
	}
	cout << ans << endl;
	return 0;
}