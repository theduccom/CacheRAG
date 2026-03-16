#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string s,a,b;
	int ret = 0;
	while(cin >> s){
		a = s.substr(0,s.length()/2+s.length()%2);
		b = s.substr(s.length()/2,s.length()/2+s.length()%2);
		reverse(b.begin(),b.end());
		if(a==b)ret++;
	}
	cout << ret << endl;
}