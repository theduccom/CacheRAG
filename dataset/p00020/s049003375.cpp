#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	getline(cin,str);

	for(int i = 0; i < str.size(); i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] -= ('a'-'A');
			cout << str[i];
		}
		else cout << str[i];
	}
	cout << endl;
}