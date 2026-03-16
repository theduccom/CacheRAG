#include <iostream>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int data[10];
	data[0] = 1;
	for(int i = 1; i < 10; ++i){
		data[i] = data[i - 1] * 2;
	}

	int n;
	while(cin >> n){

		bool check[10];
		for(int i = 0; i < 10; ++i){
			check[i] = false;
		}

		for(int i = 9; i >= 0; --i){
			if(n >= data[i]){
				n -= data[i];
				check[i] = true;
			}
		}

		bool check2 = false;
		for(int i = 0; i < 10; ++i){
			if(check[i]){
				if(check2) cout << " ";
				else check2 = true;
				cout << data[i];
			}
		}

		cout << endl;

	}

	return 0;
}