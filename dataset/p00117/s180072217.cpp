#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int N,M,A,B,C,D;
const int inf = 100000;
int main()
{
	cin >> N >> M;
	int K[32][32];
	for(int i = 1; i < N+1; i++)
	{
		for(int j = 1; j < N+1; j++)
		{
			K[i][j] = inf;
		}
	}
	for(int i = 0; i < M; i++)
	{
		scanf("%d,%d,%d,%d", &A, &B, &C, &D);
		K[A][B] = C;
		K[B][A] = D;
	}
	for(int k = 1; k < N+1; k++)
	{
		for(int i = 1;i < N+1;i++)
		{
			for(int j = 1;j < N+1;j++)
			{      
				K[i][j] = min( K[i][j], K[i][k] + K[k][j]);
			}
		}
	}
	int s,g,V,P;
	scanf("%d,%d,%d,%d",&s,&g,&V,&P);
	V -= K[s][g];
	V -= K[g][s];
	V -= P;
	cout << V <<endl;
}