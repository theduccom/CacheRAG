#include <iostream>
using namespace std;

int main() {
	int b;
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			b=i*j;
			cout<<i<<"x"<<j<<"="<<b<<endl;
		}
	}
	return 0;
}