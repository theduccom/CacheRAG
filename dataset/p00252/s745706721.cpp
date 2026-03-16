#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a== b && a!=c) cout << "Open" << endl;
	else cout << "Close" << endl;
	return 0;
}