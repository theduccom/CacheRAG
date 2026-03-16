#include <iostream>
#include <string>
using namespace std;

void func()
{
	int point = 0;
	int out   = 0;
	int hit   = 0;
	string str;

	while(out < 3)
	{
		cin >> str;
		if(str == "OUT"    )
		{
			out++;
		}
		else if(str == "HOMERUN") 
		{
			point += hit+1;
			hit = 0;
		}
		else if(str == "HIT")
		{
			if(hit<3)	hit++;
			else		point++;
		}
	}
	cout << point << endl;
}


int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		func();
	}
	return 0;
}