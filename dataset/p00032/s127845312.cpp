#include <iostream>
using namespace std;

int main()
{
	char p,q;
	int a,b,c;
	int x=0,y=0;
	while(cin >> a >> p >> b >> q >> c)
	{
		if(a*a+b*b==c*c)	x++;
		if(a==b)			y++;
	}
	cout << x << endl << y << endl;
}