#include <bits/stdc++.h>
using namespace std;

bool p[500001] = {true, true};

int main()
{
	for (int i = 2; i * i < 500001; i++){
		for (int j = i * i; j < 500001; j += i){
			p[j] = true;
		}
	}
	
	int n;
	while(cin >> n){

		for (int i = n - 1; ; i--){
			if (!p[i]){
				cout << i << " ";
				break;
			}
		}
	
		for (int i = n + 1; ; i++){
			if (!p[i]){
				cout << i << endl;
				break;
			}
		}
	}
	
	return (0);
}