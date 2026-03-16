#include <bits/stdc++.h>
#include <vector>
using namespace std;
string x;
int h;
int main(){
	getline(cin, x);
	for(int i = 0; i < x.length(); i++){
		h = (int)x[i];
		if(h >= 97 && h <= 122){
			h = h - 32;
			cout << char(h);
		}
		else
			cout << x[i];
	}
	cout << "\n";
	return 0;
}