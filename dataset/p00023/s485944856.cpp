#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	for(size_t i = 0; i < N; i++)
	{
		long double xa , ya , ra , xb , yb , rb;
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		long double l2 = ( xa - xb )*( xa - xb ) + ( ya - yb )*( ya - yb );
		if(( ra + rb )*( ra + rb ) < l2)
		{
			cout << 0 << endl;
		} else
		{
			if(l2 < ( ra - rb )*( ra - rb ) && rb < ra)
			{
				cout << 2 << endl;
			} else if(l2 < ( rb - ra )*( rb - ra ) && ra < rb)
			{
				cout << -2 << endl;
			} else
			{
				cout << 1 << endl;
			}
		}
	}
}