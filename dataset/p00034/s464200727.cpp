	#include <iostream>
using namespace std;

int main()
{
	double l[10],v1,v2; char c;

	while(cin >> l[0])
	{
		double sl = l[0];
		for(int i=1; i<10; i++)
		{
			cin >> c >> l[i];
			sl += l[i];
		}

		cin >> c >> v1 >> c >> v2;


		double t = v1 / (v1+v2);

		double r = 0;
		for(int i=0; i<10; i++)
		{
			r += l[i];
			if(t < r/sl+1e-10)
			{
				cout << i+1 << endl;
				break;
			}
		}
	}
}