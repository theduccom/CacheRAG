#include <iostream>

using namespace std;

int main()
{
	const int Max = 50010;
	bool prime[Max] = {false};
	
	for (int i = 2; i * i < Max; i++){
		for (int j = i * i; j < Max; j += i){
			prime[j] = true;
		}
	}
	
	int n;
	while (cin >> n, n){
		int count = 0;
		for (int i = 2; i <= n / 2; i++){
			if (!prime[i] && !prime[n - i]){
				count++;
			}
		}
		cout << count << endl;
	}
}