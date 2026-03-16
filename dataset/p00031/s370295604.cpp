#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(void){
	int n;
	while(cin >> n){
		for (int i=0; i<10; i++){
			if (n%2==1){
				cout << (int)pow(2.0,i);
				n = (n-1)/2;
				
			if (n==0){
				cout << endl;
				break;
			}else{
				cout << " ";
			}
			}else{
				n = n/2;
			}
		}
	}



	return 0;
}