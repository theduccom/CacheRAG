#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

void solve()
{
	int count[4] = {0};
	int num;
	string blood;
	while(scanf("%d,", &num) != EOF)
	{
		cin >> blood;
		if(blood == "A")
		{
			++count[0];
		}
		else if(blood == "B")
		{
			++count[1];
		}
		else if(blood == "AB")
		{
			++count[2];
		}
		else
		{
			++count[3];
		}
	}
	cout << count[0] << endl;
	cout << count[1] << endl;
	cout << count[2] << endl;
	cout << count[3] << endl;
}

int main()
{
	solve();
	return(0);
}