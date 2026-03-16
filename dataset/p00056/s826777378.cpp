#include <iostream>
using namespace std;

int main()
{
	int n;
	bool p[50001] = {false, false};
	
	for (int i = 2; i * i < 50001; i++){
		for (int j = i * i; j < 50001; j += i){
			p[j] = true;
		}
	}
	while (cin >> n, n){
		int c = 0;
		for (int i = 2; i <= n / 2; i++){
			if (!p[i] && !p[n - i]){
				c++;
			}
		}
		cout << c << endl;
	}
	return (0);
}