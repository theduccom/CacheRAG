#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	char d;
	int p,n,ps,ns,c;
	
	ps=ns=c=0;
	while(cin >> p >> d >> n)
	{
		ps+=p*n;
		ns+=n;
		c++;
	}
	cout << ps << endl << (int)((double)ns/c+0.5) << endl;
}