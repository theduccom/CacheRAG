#include <iostream>
using namespace std;

int main()
{
	int n = 0 , m = 0;
	for(n = m = 1;n<=9;n++)
	{
		for(m=1;m <= 9;m++)
		{

		cout << n << "x" << m << "=" << n*m << endl;

		}
	}
	return 0;
}