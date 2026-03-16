#include <iostream>
using namespace std;
 
int main() {
    int a,b,c;
    cin >> a >> b >> c; a=a*4+b*2+c;
    if (a==6 || a==1) cout << "Open"; else cout << "Close";
    cout << endl; 
	return 0;
} 