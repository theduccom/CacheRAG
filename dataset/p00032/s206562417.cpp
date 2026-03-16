#include <iostream>
using namespace std;

bool ishisi(int a,int b, int c)
{
	if(a==b)
		return true;
	return false;
}

bool istyou(int a,int b, int c)
{
	if(a*a+b*b == c*c)
		return true;
	return false;
}

int main()
{
	int a,b,c;
	char dot;
	int hisicount=0;
	int tyoucount=0;
	while(cin >> a && cin >> dot && cin >> b && cin >> dot && cin >> c){
		if(ishisi(a,b,c))
			hisicount++;
		if(istyou(a,b,c))
			tyoucount++;
	}
	cout << tyoucount << endl;
	cout << hisicount << endl;
	return 0;
}