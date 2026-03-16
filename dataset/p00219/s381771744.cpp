#include<iostream>
using namespace std;

int main(){

	int n;

	while (cin >> n && n != 0){

		int kind[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

		for (int i = 0; i < n; i++){

			int k;
			cin >> k;
			kind[k]++;
		}

		for (int i = 0; i < 10; i++){

			if (kind[i] != 0){

				for (int j = 0; j < kind[i]; j++){
					cout << '*';
				}
			}

			else cout << '-';

			cout << endl;
		}
	}
}