#include <iostream>

using namespace std;

int main()
{
    int f=0;
    while (1)
    {
	int a,b;
	cin >> a >> b;
	if (a==0)break;
	if (f==1)cout << endl;
	f=1;
	int f2=0;
	for (int i=a;i<=b;i++)
	{
	    if (i%400==0||(i%4==0&&i%100!=0))
	    {
		f2=1;
		cout << i << endl;
	    }
	}
	if (f2==0)cout << "NA" << endl;
    }
    return 0;
}