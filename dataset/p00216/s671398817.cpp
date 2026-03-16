#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int d[3] = {125,140,160};

	while(cin >> n, n >= 0){
		int mon = 1150;
		n -= 10;

		for(int i = 0; i < 10 && n > 0; i++,n--){
			mon += d[0];
		}
		for(int i = 0; i < 10 && n > 0; i++,n--){
			mon += d[1];
		}
		for(int i = 0; n > 0; i++,n--){
			mon += d[2];
		}

		cout << 4280 - mon << endl;
	}


	return 0;
}