#include <iostream>
#include <algorithm>

#define INF 200000000

using namespace std;

int main(void){
	int n,m,s,t,c[2];
	cin >> n >> m;
	
	int d[n][n];
	fill((int *)d, (int *)d+n*n, INF);
	for(int i=0;i<n;i++) d[i][i] = 0;
	
	for(int i=0;i<m;i++){
		cin >> s;
		cin.ignore();
		cin >> t;
		cin.ignore();
		cin >> c[0];
		cin.ignore();
		cin >> c[1];
		d[s-1][t-1] = c[0];
		d[t-1][s-1] = c[1];
	}
	
	//WF
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
			}
		}
	}
	
	cin >> s;
	cin.ignore();
	cin >> t;
	cin.ignore();
	cin >> c[0];
	cin.ignore();
	cin >> c[1];
	cout << c[0]-c[1]-d[s-1][t-1]-d[t-1][s-1] << endl;
}