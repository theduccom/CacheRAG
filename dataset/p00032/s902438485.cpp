#include <iostream>
using namespace std;

int main() {
	int a,b,c,rect=0,diamond=0;
	while (scanf("%d,%d,%d",&a,&b,&c) != EOF)
	{
		if (a*a+b*b == c*c)
			rect++;
		if (a==b)
			diamond++;
	}
	cout << rect << endl << diamond << endl;
	return 0;
}