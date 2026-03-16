#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
	int a = 0, b = 0, ab = 0, o = 0, n;
	char bld[3];

	while(scanf("%d,%s", &n, bld) != EOF){
		if(bld[1] == 'B')    ab++;
		else if(bld[0] == 'A')    a++;
		else if(bld[0] == 'B')    b++;
		else if(bld[0] == 'O')    o++;
	}

	cout << a << endl << b << endl << ab << endl << o << endl;
	
	return 0;
}