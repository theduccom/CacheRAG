#include<iostream>
using namespace std;

void reset(int*);

int main()
{
	int n;
	int mx=0;
	int nuln[20000] = {0};
	int num , fa , sc ;
	int mnum;
	int i;
	cin >> n;
	while (n != 0)
	{
		mx = 0;
		reset(nuln);
		for (i = 0; i < n; i++)
		{
			cin >> num >> fa >> sc;
			nuln[num] = fa + sc;
		}
		for (i = 1; i <= 10000; i++)
		{
			if (nuln[i] > mx)
			{
				mnum = i;
				mx = nuln[i];
			}
		}
		cout << mnum << ' ' << nuln[mnum] << endl;
		cin >> n;
	}
	return 0;
}

void reset(int *re)
{
	int i;
	for (i = 1; i <= 10000; i++)
	{
		re[i] = 0;
	}
	return;
}