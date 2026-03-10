#include<iostream>
using namespace std;

int main(){
	int k;
	for(int i = 1 ; i < 10 ; i++){
		for(int j = 1 ; j < 10 ; j++){
			k = i * j;
			cout << i << "x" << j << "=" << k << endl;
		}
	}
    return 0;
}