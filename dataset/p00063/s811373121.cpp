#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string a;
	int count = 0;
	while(cin >> a){
		string b = a;
		reverse(b.begin(),b.end());
		if(a == b) count++;
	}
	cout << count << "\n";
}