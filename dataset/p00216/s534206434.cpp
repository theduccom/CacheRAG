#include<iostream>
using namespace std;

int main(){
	int n;
	while(1){
		cin >> n;
		if(n == -1) break;
		if(n > 30){
			cout << 4280 - (1150 + 10*125 + 10*140 + (n-30)*160) << endl;
		}
		else if(n > 20){
			cout << 4280 - (1150 + 10*125 + (n-20)*140) << endl;
		}
		else if(n > 10){
			cout << 4280 - (1150 + (n-10)*125) << endl;
		}
		else {
			cout << 4280 - 1150 << endl;
		}
	}
}