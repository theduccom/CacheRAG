#include <iostream>
using namespace std;

int main()
{
	int n,m,a,i;
	while(cin >> n, n)
	{
		for(a=i=0,m=5; i<13; i++,m*=5)
		{
			a+=n/m;
		}
		cout << a << endl;
	}
}