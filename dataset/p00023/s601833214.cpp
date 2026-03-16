#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>
#include <climits>
#include <cmath>
#include <cfloat>

using namespace std;

int n, out;
double x[2], y[2], r[2], dst;

int main()
{
	
	cin >> n;
	
	while(n--)
	{
		
		for( int i = 0; i < 2; i++)
		{
			cin >> x[i] >> y[i] >> r[i];
		}
		
		dst = sqrt( pow(x[1] - x[0], 2) + pow(y[1] - y[0], 2) );
		
		if( dst > r[0] + r[1] )
			out = 0;
		else if( abs(r[0] + r[1]) >= dst && dst >= abs(r[0] - r[1]))
			out = 1;
		else 
			out = r[0] > r[1] ? 2 : -2;
		
		cout << out << endl;
		
	}
	
	return 0;
}