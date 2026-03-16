#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n-->0){
		double xa,ya,ra,xb,yb,rb;
		cin >>xa>>ya>>ra>>xb>>yb>>rb;
		double d = sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
		if(ra>d+rb) cout << 2 << endl;
		else if(rb>d+ra) cout << -2 << endl;
		else if(d<=ra+rb) cout << 1 << endl;
		else cout << 0 << endl;
	}
}