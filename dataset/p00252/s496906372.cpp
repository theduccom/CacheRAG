#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	string ans;
	if( a == 1 && b == 0 && c == 0 ) ans = "Close";
	else if( a == 0 && b == 1 && c == 0 ) ans = "Close";
	else if( a == 1 && b == 1 && c == 0 ) ans = "Open";
	else if( a == 0 && b == 0 && c == 1 ) ans = "Open";
	else if( a == 0 && b == 0 && c == 0 ) ans = "Close";
	cout << ans << endl;
}