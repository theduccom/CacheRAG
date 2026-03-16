#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a,b,c,r,n,t;
	while(cin >> a >> b >> c, (a||b||c))
	{
		if(a>b) swap(a,b);
		if(a>c) swap(a,c);
		if(b>c) swap(b,c);

		r = a*a + b*b;

		cin >> n;
		while(n--)
		{
			cin >> t;
			t = t*t*4;
			cout << (r<t?"OK":"NA") << endl;
		}
	}
	return 0;
}