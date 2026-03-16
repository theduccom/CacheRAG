#include<iostream>
#include<vector>

using namespace std;



int main(){
	int in;
	int prime[60001] = {};

	vector<int> p;
	int i, j;
	for (i = 2; i*i < 60000; i++){
		if (prime[i] == 0){
			for (j = 2; i*j <= 60000; j++){
				prime[i*j] = 1;
			}
		}
	}
	for (i = 1; i < 60001; i++){
		if (prime[i] == 0){
			p.push_back(i);
		}
	}



	while (cin >> in){
		if (in == 0){
			break;
		}
		for (i = in; i > 0; i--){
			if (prime[i] == 0 && prime[i - 2] == 0){
				cout << i - 2 << " " << i << endl;
				break;
			}
		}		

	}
}