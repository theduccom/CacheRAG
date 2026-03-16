#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int p = 4280,c,n;
	while(1){
		cin >> n;
		if(n == -1) break;
		c = 1150;
		if(n > 10) c += 125 * (n - 10);
		if(n > 20) c += 15 * (n - 20);
		if(n > 30) c += 20 * (n - 30);
		cout << p - c << endl;
	}
	return 0;
}