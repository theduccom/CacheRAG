#include<iostream>
using namespace std;

int a;
int b;
int c;

int main(){
	a=0;
	while (a<9) {
		a++;
		c=a;
		b=0;
		while (b<9) {
			b++;
		    cout << a << "x" << b << "=" << c << endl;
			c += a;
		}
	}
    return 0;
}