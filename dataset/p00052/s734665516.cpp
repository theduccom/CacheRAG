#include<iostream>
using namespace std;

int main(){
	int n;
	int count = 0;
	
	while (cin >> n, n != 0){

		count = 0;

		for (int i = 1; i <= n; i++){
			int x = i;
			while (x % 5 == 0){
				if (x == 0) break;
				x /= 5;
				count++;
			}
		}

		cout << count << endl;
	}
	return 0;
}