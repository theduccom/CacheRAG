#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,m,l;
	cin >> n >> m >> l;
	int ans=n*1+m*2+l*4;
	if(ans == 3 || ans ==4)
	cout << "Open" << endl;
	else 
	cout << "Close" << endl;
	return 0;
}