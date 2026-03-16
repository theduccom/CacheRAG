#include <iostream>

using namespace std;

bool input(int* m, int* n){
	cin >> *m >> *n;
	return !(*m == 0 && *n == 0);
}

int main(void){
	int a, b;
	bool line = false;
	while(input(&a, &b)){
		if(line){
			cout << endl;
		}else{
			line = true;
		}
		bool na = true;
		for(int i = a; i <= b; i++){
			if(i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)){
				cout << i << endl;
				na = false;
			}
		}
		if(na){
			cout << "NA" << endl;
		}
	}

	return 0;
}