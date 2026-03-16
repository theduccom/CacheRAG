#include<iostream>
#include<set>
using namespace std;

int main()
{
	set<double> height;
	set<double>::iterator it;
	double d;

	while (cin>>d)
		height.insert(d);

	d = *--height.end() - *height.begin();
	cout<<d<<endl;

	return 0;
}