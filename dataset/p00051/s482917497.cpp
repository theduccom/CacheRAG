#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	string s;
	int n, a, b;cin >> n;
	while(n--){
		cin >> s;a = b = 0;
		sort(s.begin(), s.end());
		string r = s;
		reverse(r.begin(), r.end());
		
		int m = 1;
		for(int i = 7;i >= 0;i--){
			a += (s[i]-'0')*m;
			b += (r[i]-'0')*m;
			m *= 10;
		}
		cout << b-a << endl;
	}
	
	return 0;
}