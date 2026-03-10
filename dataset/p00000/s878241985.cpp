#include <iostream>
using namespace std;

int Manipulate(int, int);

int main(){
	const int WIDTHMIN = 1;
	const int HEIGHTMIN = 1;
	const int WIDTHMAX = 9;
	const int HEIGHTMAX = 9;
	int i, j;
	for(i=WIDTHMIN; i<=WIDTHMAX; i++){
		for(j=HEIGHTMIN; j<=HEIGHTMAX; j++){
			cout << i << "x" << j << "=" << Manipulate(i, j) << "\n" << flush;
		}
	}
	return 0;
}

int Manipulate(int num1, int num2){
	return num1 * num2;
}