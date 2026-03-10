#include <iostream>

using namespace std;

int main(){
	int a,b,c;
	for(b=1;b<=9;b++){
		for(a=1;a<=9;a++){
			c=a*b;
			cout<<b<<"x"<<a<<"="<<c<<endl;
		}
	}
}