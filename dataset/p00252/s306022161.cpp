#include<iostream>
using namespace std;

int main(void){
	int a,b,c,sum;
	cin>> a >> b >> c;
	sum = a+b+c*2;
	if(sum>=2)
		cout << "Open"<< endl;
	else
		cout << "Close"<< endl;
	return 0;
}