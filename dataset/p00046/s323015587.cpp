// 2011/06/23 Tazoe

#include <iostream>
using namespace std;

int main()
{
	double mnt;
	cin >> mnt;

	double max = mnt;
	double min = mnt;

	while(true){
		cin >> mnt;
		if(cin.eof())
			break;

		if(mnt>max)
			max = mnt;
		if(mnt<min)
			min = mnt;
	}

	cout << max-min << endl;

	return 0;
}