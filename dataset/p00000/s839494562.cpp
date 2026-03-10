#include <iostream>
using namespace std;

int main(){
	for(int i=1 ;i<=9; i++){
		for(int ii=1 ;ii<=9; ii++){
			cout << i << "x" << ii << "=" << i*ii << endl;
		}
	}
	return 0;
}