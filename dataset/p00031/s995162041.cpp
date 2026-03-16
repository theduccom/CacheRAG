#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
	int w=1,f=0;
	for (int i=0;i<10;i++)
	{
	    if (n&w)
	    {
		if (f==1)
		    cout << " ";
		f=1;
		cout << w;
	    }
	    w*=2;
	}
	cout << endl;
    }
    return 0;
}