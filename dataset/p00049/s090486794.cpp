#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
	map<string, int> m;
	char c;
	string s;
	int n, nn = 0;
	while(cin >> n >> c >> s){m[s]++;}
	cout << m["A"] << endl;
	cout << m["B"] << endl;
	cout << m["AB"] << endl;
	cout << m["O"] << endl;
	return 0;
}