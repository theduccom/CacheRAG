#include<iostream>
using namespace std;

int main(void)
{
	int a, b, c;
	char c1, c2;
	int tyocount = 0;
	int hishicount = 0;

	while(cin >> a >> c1 >> b >> c2 >> c)
	{
		if(a==b) hishicount++;
		if(a*a+b*b==c*c) tyocount++;
	}
	cout << tyocount << endl << hishicount << endl;
	return 0;
}