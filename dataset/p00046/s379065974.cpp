#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	double a,Max,Min;
	bool flag  = true;
	while(cin >> a)
	{
		if(flag)
		{
			Max = a;
			Min = a;
			flag = false;
		}
		else
		{
			Max = max(Max,a);
			Min = min(Min,a);
		}
	}

	cout << Max - Min << endl;
	return 0;
}