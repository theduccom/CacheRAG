// 2011/04/02 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int n;
		cin >> n;
		if(n==0)
			break;

		int sum = 0;
		for(int i=5; n/i; i*=5)
			sum += n/i;

		cout << sum << endl;
	}

	return 0;
}