#include <iostream>
#include <string>
using namespace std;

int main()
{
	char c1,c2;
	int len1,len2,len3;
	int count_1 = 0,count_2 = 0;
	while(cin >> len1 >> c1 >> len2 >> c2 >> len3)
	{
		if(len3*len3 == len1*len1 + len2*len2) count_1++;

		if(len1 == len2) count_2++;
	}

	cout << count_1 << endl << count_2 << endl;
	return 0;
}