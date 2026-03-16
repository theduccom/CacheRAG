#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
typedef long long LL; 

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	string str;
	getline(cin, str);
	
	for(size_t i = 0; i < str.size(); ++i){
		if('a' <= str[i] && str[i] <= 'z'){
			str[i] += 'A' - 'a';
		}
	}
	
	cout << str << endl;
	
	return 0;
}