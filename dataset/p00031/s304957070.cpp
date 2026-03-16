#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n,f[10],flag;
	while (cin >> n){
		flag = 0;
		for (int i = 0; i < 10; i++) f[i] = 0;
		for (int i = 0; n; i++){
			f[i] = n % 2;
			n /= 2;
		}
		for (int i = 0; i < 10; i++){
			if (f[i]) {
				if(!flag){
					cout << (int)pow(2.0, i);
					flag = 1;
				}
				else cout << " " << (int)pow(2.0, i);
			}
		}
		cout << endl;
	}
}