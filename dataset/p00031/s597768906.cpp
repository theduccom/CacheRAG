#include <iostream>
using namespace std;

int main()
{
	int w,m,f;
	while(cin >> m)
	{
		f=w=1;
		while(m)
		{
			if(m&1)
			{
				cout << (f?"":" ") << w; f=0;
			}
			m = m>>1;
			w = w<<1;
		}
		cout << endl;
	}
}