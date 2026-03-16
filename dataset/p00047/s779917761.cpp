#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main(){
	map<char, int> m;
	char a, b, c;
	m['A'] = 1;
	while(cin >> a >> c >> b)swap(m[a], m[b]);
	if(m['A'])cout << 'A' << endl;
	if(m['B'])cout << 'B' << endl;
	if(m['C'])cout << 'C' << endl;
	return 0;
}