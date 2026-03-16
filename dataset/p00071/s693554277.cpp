#include <iostream>
#include <string>
#include <queue>
#define PAIR pair<int, int>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		int field[8][8];
		for(int j = 0; j < 8; j++){
			string input;
			cin >> input;
			for(int k = 0; k < 8; k++){
				field[j][k] = input[k] - '0';
			}
		}
		int inputx, inputy;
		cin >> inputx >> inputy;

		queue<PAIR> st;
		st.push(PAIR(inputx-1, inputy-1));
		int dx[] = {1, 2, 3, 0, 0, 0,-1,-2,-3, 0, 0 ,0};
		int dy[] = {0, 0, 0, 1, 2, 3, 0, 0, 0,-1,-2,-3};
		while(!st.empty()){
			int x = st.front().first;
			int y = st.front().second;
			field[y][x] = 0;
			//cout << x << y << endl;
			for(int j = 0; j < 12; j++){
				//cout << "ok";
				int nextx = st.front().first + dx[j];
				int nexty = st.front().second + dy[j];
				if(0 <= nextx && nextx < 8 && 0 <= nexty && nexty < 8){
					if(field[nexty][nextx] == 1) st.push(PAIR(nextx, nexty));
				}
			}
			st.pop();
		}

		cout << "Data " << i << ":" << endl;
		for(int j = 0; j < 8; j++){
			for(int k = 0; k < 8; k++){
				cout << field[j][k];
			}
			cout << endl;
		}

	}
	return 0;
}