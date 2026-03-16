#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<queue>
#include<utility>

using namespace std;

int n;

bool judge(int num)
{
	int cnt = 0;

	for (int i = 2; i < num;i++)
	{
		if (num%i==0)
		{
			cnt = 1;

			return false;
		}
	}

	return true;


}

int main(void)
{
	while (cin >> n, n)
	{
		for (int i = n; i > 2;i--)
		{
			if (judge(i)&&judge(i-2))
			{
				cout << i - 2 << " " << i << endl;
				break;
			}
		}

	}


	return 0;
}
