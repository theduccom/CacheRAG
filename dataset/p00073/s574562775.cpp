// 2011/03/29 Tazoe

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	while(true){
		int x;
		cin >> x;
		int h;
		cin >> h;
		if(x==0&&h==0)
			break;

		double S1 = (double)(x*x);
		double S2 = (double)x*sqrt((double)(x*x+4*h*h));

		cout.precision(6);
		cout << fixed << S1+S2 << endl;
	}

	return 0;
}