#include<iostream>
#include<string>

#define COLS 12
#define ROWS 12

using namespace std;

void dfs(int map[][COLS+2], int i, int j){
	int di[] = {1,0,0,-1};
	int dj[] = {0,-1,1,0};

	if( map[i][j] == 0 ) return ;
	else map[i][j] = 0;
	for(int m = 0; m < sizeof(di)/sizeof(di[0]); m++)
		dfs(map, i + di[m], j + dj[m]);
}

int main(void){
	while( true ){
		int cnt = 0;
		int map[ROWS+2][COLS+2] = {{0,},};

		if( cin.eof() ) break;
		for(int i = 0; i < ROWS; i++){
			char buf[32];
			string s;
			cin.getline(buf,sizeof(buf)/sizeof(buf[0]));
			s = buf;

			if( cin.eof() ) return 0;
			for(int j = 0; j < COLS; j++)
				if( s[j] == '1' ) map[i+1][j+1] = 1;	
		}
		cin.ignore();

		for(int i = 0; i < ROWS; i++)
			for(int j = 0; j < COLS; j++)
				if( map[i+1][j+1] == 1 ){
					dfs(map, i+1, j+1);
					cnt++;
				}

		cout << cnt << endl;
	}
	return 0;
}