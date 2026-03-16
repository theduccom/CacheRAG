#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int i,a,b,c=-1;
	while(cin >> a >> b, a||b)
	{
		if(c!=-1) cout << endl;
		for(c=0,i=a; i<=b; i++)
		{
			if( (i%4==0 && i%100!=0) || (i%400==0) )
			{
				c++;
				cout << i << endl;
			}
		}

		if(!c) cout << "NA" << endl;
	}
}