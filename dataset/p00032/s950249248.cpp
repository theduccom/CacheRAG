#include<iostream>
using namespace std;

#define MAX 10	// ªºÌ

int main()
{
	int x, y, d;
	int oblong = 0, rhombi = 0;

	while (scanf("%d,%d,%d", &x, &y, &d) != EOF) {
		if (x*x + y*y == d*d) oblong++;
		if (x == y) rhombi++;
	}
	cout<<oblong<<endl;
	cout<<rhombi<<endl;

	return 0;
}