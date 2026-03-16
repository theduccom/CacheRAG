#include <iostream>
using namespace std;

bool p[1000000];

int main()
{

	for (int i = 2; i < 1000000; i++){
		p[i] = true;
	}

	for (int i = 2; i * i < 1000000; i++){
		if (p[i]){
			for (int j = i * 2; j < 1000000; j += i){
				p[j] = false;
			}
		}
	}

	int n;
	while (cin >> n, n){
		int c = 0;
	    long long sum = 0;
		
		for (int i = 2; c != n; i++){
			if (p[i]){
				sum += i;
				c++;
			}
		}
		cout << sum << endl;
	}
	return (0);
}