#include <iostream>
using namespace std;

//0102
int main(){
	int n;
	while(cin >> n, n){
		int tbl[11][11]={0};

		for(int i=0; i<n; ++i){
			for(int j=0; j<n; ++j){
				cin >> tbl[i][j];
				tbl[n][j] += tbl[i][j];
				tbl[i][n] += tbl[i][j];				
			}
			tbl[n][n] += tbl[i][n];
		}

		for(int i=0; i<n+1; ++i){
			for(int j=0; j<n+1; ++j){
				cout.width(5);
				cout << tbl[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}