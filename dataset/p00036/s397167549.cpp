#include <iostream>
#include <algorithm>
using namespace std;

/*
0123
456
78
9
*/
const int data[7][10] = {
						{1, 1, 0, 0, 1, 1, 0, 0, 0, 0},
						{1, 0, 0, 0, 1, 0, 0, 1, 0, 1},
						{1, 1, 1, 1, 0, 0, 0, 0, 0, 0},
						{0, 1, 0, 0, 1, 1, 0, 1, 0, 0},
						{1, 1, 0, 0, 0, 1, 1, 0, 0, 0},
						{1, 0, 0, 0, 1, 1, 0, 0, 1, 0},
						{0, 1, 1, 0, 1, 1, 0, 0, 0, 0}
						};

const int change[10][2] = {{0, 0}, {1, 0}, {2, 0}, {3, 0}, {0, 1}, {1, 1}, {2, 1}, {0, 2}, {1, 2}, {0, 3}};

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	while(1){
		int c[15][15];
		for(int i = 0; i < 15; ++i){
			for(int j = 0; j < 15; ++j){
				c[j][i] = 0;
			}
		}

		for(int i = 0; i < 8; ++i){
			for(int j = 0; j < 8; ++j){
				char c0;
				if(!(cin >> c0)) return 0;
				c[j][i] = c0 - '0';
			}
		}

		//int m = 0;
		bool check2 = false;
		for(int i = 0; i < 8; ++i){
			for(int j = 0; j < 8; ++j){
				for(int k = 0; k < 7; ++k){
					bool check = true;
					for(int l = 0; l < 10; ++l){
						//m = max(m, l);
						if(c[j + change[l][0]][i + change[l][1]] != data[k][l]){
							check = false;
							/*if(i == 4 && j == 4 && k == 1){
								cout << l << endl;
							}*/
							break;
						}
					}
					if(check){
						cout << char('A' + k) << endl;
						check2 = true;
						break;
					}
				}
				if(check2) break;
			}
			if(check2) break;
		}

		//if(!check2) cout << m << endl;
	}

	return 0;
}