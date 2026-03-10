#include<iostream>
using namespace std;

int main(){

	int a = 1;
	int b = 1;
	int r = 0;

	for(a=1;a<=9;a++){
		for(b=1;b<=9;b++){
			r = a*b;
			cout << a;
			cout << "x";
			cout << b;
			cout << "=";
			cout << r << endl;
		}
		b = 1;
	}

    return 0;
}