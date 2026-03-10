#include<iostream>
using namespace std;
int main(){
	int a=1,b=1,c=0;
	for(int j=0;j<9;j++){
		for(int i=0;i<9;i++){
			c=a*b;
			cout<<a<<'x'<<b<<"="<<c<<endl;
			b++;
		}
		b=1;
		a++;
	}

	return 0;
}
