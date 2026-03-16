#include<iostream>
#include<string>
#include<vector>
using namespace std;
char tetromino_figure(vector<string> v){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			if(v[i][j] == '1'){
				if(v[i][j + 1] == '1' && v[i + 1][j] == '1' && v[i + 1][j + 1] == '1') return 'A';
				if(v[i + 1][j] == '1' && v[i + 2][j] == '1' && v[i + 3][j] == '1') return 'B';
				if(v[i][j + 1] == '1' && v[i][j + 2] == '1' && v[i][j + 3] == '1') return 'C';
				if(v[i + 1][j - 1] == '1' && v[i + 1][j] == '1' && v[i + 2][j - 1] == '1') return 'D';
				if(v[i][j + 1] == '1' && v[i + 1][j + 1] == '1' && v[i + 1][j + 2] == '1') return 'E';
				if(v[i + 1][j] == '1' && v[i + 1][j + 1] == '1' && v[i + 2][j + 1] == '1') return 'F';
				if(v[i][j + 1] == '1' && v[i + 1][j - 1] == '1' && v[i + 1][j] == '1') return 'G';
			}
		}
	}
	return '0';
}
int main(){
	string s;
	while(cin >> s){
		if(s == "\n") continue;
		vector<string> v;
		for(int i = 1; i <= 3; i++) s += '0';
		v.push_back(s);
		for(int i = 2; i <= 8; i++){
			cin >> s;
			for(int j = 1; j <= 3; j++) s += '0';
			v.push_back(s);
		}
		for(int i = 1; i <= 3; i++) v.push_back("00000000000");
		cout << tetromino_figure(v) << endl;
	}
	return 0;
}
