// 2011/03/29 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		double a;
		cin >> a;
		if(cin.eof())
			break;

		double sum = a;
		for(int i=2; i<=10; i++){
			if(i%2==0)
				a *= 2.0;
			else
				a /= 3.0;
			sum += a;
		}

		cout.precision(8);
		cout << fixed << sum << endl;
	}

	return 0;
}