#include <bits/stdc++.h>
using namespace std;

double eps = 1e-10;

int main() {
	string s[16];
	while(cin >> s[0]){
		for(int i = 1; i < 8; ++i){
			cin >> s[i];
		}
		int h, w;
		for(int i = 0; i < 8; ++i){
			for(int j = 0; j < 8; ++j){
				if(s[i][j] == '1'){
					h = i;
					w = j;
					goto next;
				}
			}
		}
		next:;
		if(s[h + 1][w] == '1' && s[h][w + 1] == '1' && s[h + 1][w + 1] == '1'){
			cout << "A" << endl;
		}
		else if(s[h + 1][w] == '1' && s[h + 2][w] == '1' && s[h + 3][w] == '1'){
			cout << "B" << endl;
		}
		else if(s[h][w + 1] == '1' && s[h][w + 2] == '1' && s[h][w + 3] == '1'){
			cout << "C" << endl;
		}
		else if(s[h + 1][w - 1] == '1' && s[h + 1][w] == '1' && s[h + 2][w - 1] == '1'){
			cout << "D" << endl;
		}
		else if(s[h][w + 1] == '1' && s[h + 1][w + 1] == '1' && s[h + 1][w + 2] == '1'){
			cout << "E" << endl;
		}
		else if(s[h + 1][w] == '1' && s[h + 1][w + 1] == '1' && s[h + 2][w + 1] == '1'){
			cout << "F" << endl;
		}
		else if(s[h][w + 1] == '1' && s[h + 1][w] == '1' && s[h + 1][w - 1] == '1'){
			cout << "G" << endl;
		}
	}
	return 0;
}