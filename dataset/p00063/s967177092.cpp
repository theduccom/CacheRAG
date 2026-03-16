#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	int c = 0;
	while(cin >> s){
		bool a = true;
		for(int i=0;i<s.size()/2;i++) if(s[i]!=s[s.size()-i-1]) a = false;
		if(a) c++;
	}
	cout << c << endl;
}