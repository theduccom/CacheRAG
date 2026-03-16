#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

#define MAX_N 1000
#define MAX_F 40320
#define MAX_G 8
#define MAX_X 4
#define MAX_Y 2

bool dp[MAX_N][MAX_F];

int res[MAX_F];
int res2[MAX_G][MAX_G][MAX_G][MAX_G][MAX_G][MAX_G][MAX_G];

int fact1[MAX_G][MAX_G][MAX_G][MAX_G][MAX_G][MAX_G][MAX_G];
vector<int> fact2[MAX_F];
int cnt;

int main() {
	cnt = 0;
	int A[MAX_G];
	int B[MAX_G];
	for (int i = 0; i < MAX_G; i++)
	{
		A[i] = i;
	}

	do
	{
		fact1[A[0]][A[1]][A[2]][A[3]][A[4]][A[5]][A[6]] = cnt;
		vector<int>p;
		for (int i = 0; i < 8; i++)
		{
			p.push_back(A[i]);
		}
		fact2[cnt] = p;
		cnt++;
	} while (next_permutation(A, A + 8));

	for (int i = 0; i < MAX_N; i++)
	{
		for (int j = 0; j < MAX_F; j++)
		{
			dp[i][j] = false;
		}
	}

	int c = 0;

	dp[0][c] = true;

	for (int i = 0; i < MAX_N - 1; i++)
	{
		for (int j = 0; j < MAX_F; j++)
		{
			if (dp[i][j] == true)
			{
				vector<int>d = fact2[j];
				int D[MAX_Y][MAX_X];
				int E[MAX_Y][MAX_X];

				for (int k = 0; k < MAX_G; k++)
				{
					D[k / MAX_X][k % MAX_X] = d[k];
					E[k / MAX_X][k % MAX_X] = d[k];
				}

				int zerox, zeroy;

				for (int k = 0; k < 2; k++)
				{
					for (int l = 0; l < 4; l++)
					{
						if (D[k][l] == 0)
						{
							zeroy = k;
							zerox = l;
						}
					}
				}

				//Up.
				if (zeroy >= 1)
				{
					for (int k = 0; k < MAX_Y; k++)
					{
						for (int l = 0; l < MAX_X; l++)
						{
							E[k][l] = D[k][l];
						}
					}
					int d1 = E[zeroy][zerox];
					int d2 = E[zeroy - 1][zerox];
					E[zeroy][zerox] = d2;
					E[zeroy - 1][zerox] = d1;

					dp[i + 1][fact1[E[0][0]][E[0][1]][E[0][2]][E[0][3]][E[1][0]][E[1][1]][E[1][2]]] = true;
				}
				//Down.
				if (zeroy < MAX_Y - 1)
				{
					for (int k = 0; k < MAX_Y; k++)
					{
						for (int l = 0; l < MAX_X; l++)
						{
							E[k][l] = D[k][l];
						}
					}
					int d1 = E[zeroy][zerox];
					int d2 = E[zeroy + 1][zerox];
					E[zeroy][zerox] = d2;
					E[zeroy + 1][zerox] = d1;

					dp[i + 1][fact1[E[0][0]][E[0][1]][E[0][2]][E[0][3]][E[1][0]][E[1][1]][E[1][2]]] = true;
				}
				//Up.
				if (zerox >= 1)
				{
					for (int k = 0; k < MAX_Y; k++)
					{
						for (int l = 0; l < MAX_X; l++)
						{
							E[k][l] = D[k][l];
						}
					}
					int d1 = E[zeroy][zerox];
					int d2 = E[zeroy][zerox - 1];
					E[zeroy][zerox] = d2;
					E[zeroy][zerox - 1] = d1;

					dp[i + 1][fact1[E[0][0]][E[0][1]][E[0][2]][E[0][3]][E[1][0]][E[1][1]][E[1][2]]] = true;
				}
				//Down.
				if (zerox < MAX_X - 1)
				{
					for (int k = 0; k < MAX_Y; k++)
					{
						for (int l = 0; l < MAX_X; l++)
						{
							E[k][l] = D[k][l];
						}
					}
					int d1 = E[zeroy][zerox];
					int d2 = E[zeroy][zerox + 1];
					E[zeroy][zerox] = d2;
					E[zeroy][zerox + 1] = d1;

					dp[i + 1][fact1[E[0][0]][E[0][1]][E[0][2]][E[0][3]][E[1][0]][E[1][1]][E[1][2]]] = true;
				}
			}
		}
	}

	for (int i = 0; i < MAX_F; i++)
	{
		res[i] = 1145141919;
	}

	for (int i = 0; i < MAX_F; i++)
	{
		for (int j = 0; j < MAX_N; j++)
		{
			if (dp[j][i] == true)
			{
				res[i] = min(j, res[i]);
			}
		}
	}
	for (int i = 0; i < MAX_F; i++)
	{
		vector<int>g = fact2[i];
		int H[MAX_G];
		for (int j = 0; j < MAX_G; j++)
		{
			H[j] = g[j];
		}
		res2[H[0]][H[1]][H[2]][H[3]][H[4]][H[5]][H[6]] = res[i];
	}

	while (cin >> B[0] >> B[1] >> B[2] >> B[3] >> B[4] >> B[5] >> B[6] >> B[7])
	{
		cout << res2[B[0]][B[1]][B[2]][B[3]][B[4]][B[5]][B[6]] << endl;
	}
	return 0;
}