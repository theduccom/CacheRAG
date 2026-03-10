#include <iostream>
using namespace std;

int main()
{
	for (int i=1;i<=9;i += 1)
	{
		for (int j=1;j<=9;j += 1)
		{
			cout << i << 'x' << j << '=' << i*j << endl;
		}
	}
}