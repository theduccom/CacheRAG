#include<iostream>
using namespace std;

int main(){
	int i=1;
	int j=1;

	for (i;i<10;i++){
		for(j;j<10;j++){

			cout << i << 'x' << j << '=' << i*j << endl;
		}
		j = 1;

	}
	return 0;
}