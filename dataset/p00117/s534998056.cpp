#include <iostream>
#include <algorithm>
#define inf 999999

using namespace std;

int main(int argc, char **argv)
{
	int f[21][21], n, m, a, b, c, d;
	
	while(cin >> n >> m){
		fill(&f[1][1], &f[n+1][n+1], inf);
		
		for(int i = 1; i <= n; i++){
			f[i][i] = 0;
		}
		while(m--){
			scanf("%d,%d,%d,%d", &a, &b, &c, &d);
			f[a][b] = c;
			f[b][a] = d;
		}
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		
		for(int k = 1; k <= n; k++){
			for(int i = 1; i <= n; i++){
				for(int j = 1; j <= n; j++){
					f[i][j] = (f[i][j] < f[i][k]+f[k][j])? f[i][j] : f[i][k]+f[k][j];
				}
			}
		}
		cout << (c-d-f[a][b]-f[b][a]) << endl;
	}
	
	return 0;
}