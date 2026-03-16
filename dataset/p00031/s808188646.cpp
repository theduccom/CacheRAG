#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int N;
	while( cin >> N )
	{
		int count = 0;
		bool f = true;
		while( N )
		{
			if( N % 2 )
			{
				if( f )
				{
					f = false;
				} else
				{
					cout << " ";
				}
				cout << (int) pow ( 2 , count );
			}
			N >>= 1;
			count++;
		}
		cout << endl;
	}
}