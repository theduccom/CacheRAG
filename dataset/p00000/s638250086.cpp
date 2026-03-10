#include "iostream"

using namespace std;

int main()
{
	for (int i = 1; i < 10; i++)
	{
		for (int c = 1; c < 10; c++)
		{
			cout << i << "x" << c << "=" << i*c << endl;
		}
	}
	return 0;
}