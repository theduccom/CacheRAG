#include <iostream>
#include <algorithm>
using namespace std;

int a[3];

int main()
{
	a[0] = 1;
	char c1,c2;
	while(cin >> c1){
		cin.ignore();
		cin >> c2;
		swap(a[c1 - 'A'],a[c2 - 'A']);
	}
	for(int i = 0; i < 3; ++i){
		if(a[i])cout << (char)('A' + i) << endl;
	}
}