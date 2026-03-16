#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int l[10];
	int x1,x2;
	while (cin >> l[0])
	{
		int sum=0;
		for (int i=1; i<10; i++)scanf(",%d",&l[i]);
		for (int i=0; i<10; i++)sum+=l[i];
		scanf(",%d,%d",&x1,&x2);
		double time=(double)(sum)/(x1+x2);
		double d=time*x1;
		int r=0;
		while (d>0)
		{
			d-=l[r];
			r++;
		}
		cout << r << endl;
	}
	return 0;
}