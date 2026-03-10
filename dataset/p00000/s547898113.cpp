#include <iostream>
using namespace std;

int main(){
	for (long i = 0; i < 9; i++){
		for (long j = 0; j < 9; j++){
			cout << (i + 1) << "x" << (j + 1) << "=" << (i + 1) * (j + 1) << endl;
		}
	}
	return 0;
}