#include <iostream>
#include <map>
#include <cstring>
#include <cstdio>

using namespace std;

int main( void )
{
	int no, A, B, O, AB;
	char type[3];

	A = B = O = AB = 0;

	while (~scanf("%d,%s", &no, type))
	{
		if (!strcmp(type, "A"))
			++A;
		else if (!strcmp(type, "B"))
			++B;
		else if (!strcmp(type, "O"))
			++O;
		else
			++AB;
	}

	cout << A << endl
		 << B << endl
		 << AB << endl
		 << O << endl;

	return 0;
}