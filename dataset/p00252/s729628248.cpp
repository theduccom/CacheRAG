#include<iostream>
using namespace std;

int main(){
	int b1,b2,b3,i ;
	cin >> b1 >> b2 >> b3;
	b1 = b1*7 + b2*3 + b3;
	if(b1 == 7){ cout << "Close" <<endl;}
	if(b1 == 3){ cout << "Close" <<endl;}
	if(b1 == 10){ cout << "Open" <<endl;}
	if(b1 == 1){ cout << "Open" <<endl;}
	if(b1 == 0){ cout << "Close" <<endl;}
	
	return 0;
	}