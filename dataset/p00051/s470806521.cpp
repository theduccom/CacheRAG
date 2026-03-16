#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int r=0; r<n; r++){
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		int a=0,b=0;
		for(int i=0; i<8; i++){
			a = a*10 +s[i];
			b = b*10 +s[7-i];
		}
		cout << b-a << endl;
	}
	return 0;
}
