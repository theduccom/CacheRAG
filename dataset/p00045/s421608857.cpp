#include <iostream>
using namespace std;

int main(){
	int p,n,a=0,b=0,c=0;
	while (true){
		char s;
		cin>>p>>s>>n;
		if (cin.eof()) break;
		a += p*n;
		b += n;
		c++;
	}
	cout<<a<<endl;
	cout<<(int)(0.5+1.0*b/c)<<endl;
}