#include<iostream>
using namespace std;

int main(){
	int p, q, r;
	cin >> p >> q >> r;

	if(p && q) cout << "Open" << endl;
	else if(r) cout << "Open" << endl;
	else cout << "Close" << endl;
}