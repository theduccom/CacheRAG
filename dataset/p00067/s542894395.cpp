#include<iostream>
#include<algorithm>

using namespace std;

void search(char map[14][14], int n, int m){
	
	if(map[n-1][m] == '1'){
		map[n-1][m] = '0';
		search(map, n-1, m);
	}
	if(map[n][m+1] == '1'){
		map[n][m+1] = '0';
		search(map, n, m+1);
	}
	if(map[n+1][m] == '1'){
		map[n+1][m] = '0';
		search(map, n+1, m);
	}
	if(map[n][m-1] == '1'){
		map[n][m-1] = '0';
		search(map, n, m-1);
	}
	
}

int main(){

	int cnt;
	char map[14][14];
	
	while(cin >> map[1][1]){
		cnt = 0;
		for(int i=2; i<13; i++){
			cin >> map[1][i];
		}
		for(int i=2; i<13; i++){
			for(int j=1; j<13; j++){
				cin >> map[i][j];
			}
		}
		
		for(int i=0; i<13; i++){
			for(int j=0; j<13; j++){
				if(map[i][j] == '1'){
					cnt++;
					map[i][j] = '0';
					search(map, i, j);
				}
			}
		}
		
		cout << cnt << endl;
	}

	return 0;

}