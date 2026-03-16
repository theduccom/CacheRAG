// 2011/01/12 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int n, m;
		cin >> n >> m;
		if(n==0&&m==0)
			break;

		int cst[101][101];
		int tim[101][101];
		for(int i=1; i<=m; i++)
			for(int j=1; j<=m; j++)
				if(i==j)
					cst[i][j] = tim[i][j] = 0;
				else
					cst[i][j] = tim[i][j] = 200000;

		for(int i=0; i<n; i++){
			int a, b, c, t;
			cin >> a >> b >> c >> t;
			cst[a][b] = cst[b][a] = c;
			tim[a][b] = tim[b][a] = t;
		}

		for(int h=1; h<=m; h++)
			for(int i=1; i<=m; i++)
				for(int j=1; j<=m; j++){
					if(cst[i][j]>cst[i][h]+cst[h][j])
						cst[i][j] = cst[i][h]+cst[h][j];
					if(tim[i][j]>tim[i][h]+tim[h][j])
						tim[i][j] = tim[i][h]+tim[h][j];
				}

		int k;
		cin >> k;

		for(int i=0; i<k; i++){
			int p, q, r;
			cin >> p >> q >> r;
			if(r==0)
				cout << cst[p][q] << endl;
			else
				cout << tim[p][q] << endl;
		}
	}

	return 0;
}