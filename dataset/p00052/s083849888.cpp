#include <iostream>

using namespace std;

int main()
{
	int n;
	while (true) {
		cin >> n;
		if (n==0) break;
		
		int count_zero;
		for (count_zero = 0; n>0; n/=5, count_zero += n);
		
		cout << count_zero << endl;
	}
	
	return 0;
}