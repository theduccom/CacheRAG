#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, c, p=1;
	bool f, a[50001];
	
	fill(a, a+50001, false);
	for(int i = 3; i < 50000; i+=2){
		f = true;
	a[2] = true;
		for(int j = 3; j*j <= i; j+=2){
			if(i%j == 0){
				f = false;
				break;
			}
		}
		a[i] = f;
	}
	
	while(1){
		cin >> n;
		if(n == 0){
			break;
		}
		c = 0;
		for(int i = 2; i <= n/2; i++){
			if(a[i] && a[n-i]){
				c++;
			}
		}
		cout << c << endl;
	}
	
	return 0;
}