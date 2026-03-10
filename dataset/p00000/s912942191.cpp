#include<iostream>
using namespace std;

int main(){
	int a;
	for(int i = 1 ; i <= 9 ; i++){
		for(int b = 1 ; b <= 9 ; b++){
		a = i * b;
		cout<<i<<"x"<<b<<"="<<a<<endl;
		}
	}

	return 0;
}
