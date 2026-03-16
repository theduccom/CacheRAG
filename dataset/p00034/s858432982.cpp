#include <iostream>
#include <stdio.h>

using namespace std;

void solve()
{
	int l[10] ,v1 ,v2;
	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &l[0], &l[1], &l[2], &l[3], &l[4], &l[5], &l[6], &l[7], &l[8], &l[9], &v1, &v2) != EOF)
	{
		double posA = 0.0;
		double posB = 0.0;
		for(int i = 0; i < 10; ++i)
		{
			posB += l[i] * 1000;
		}
		int speedA = v1;
		int speedB = v2;
		while(posA < posB)
		{
			posA += speedA;
			posB -= speedB;
		}
		int dist = 0;
		for(int i = 0; i < 10; ++i)
		{
			dist += l[i] * 1000;
			if(posA <= dist)
			{
				cout << i + 1 << endl;
				break;
			}
		}
	}
}

int main()
{
	solve();
	return(0);
}