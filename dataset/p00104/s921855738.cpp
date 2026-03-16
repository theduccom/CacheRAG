#include <iostream>
#include <string>
using namespace std;

struct point{
	char c;
	int count;
};

void move(point area[100][100], int &i, int &j){
	area[i][j].count = 0;
	if(area[i][j].c == '>'){
		j++;
	}else if(area[i][j].c == '<'){
		j--;
	}else if(area[i][j].c == 'v'){
		i++;
	}else if(area[i][j].c == '^'){
		i--;
	}
}

int main(){
	int h, w;
	string s;
	point area[100][100];
	while(cin >> h >> w){
		if(h == 0 && w == 0) break;
		for(int i = 0; i < h; i++){
			cin >> s;
			for(int j = 0; j < s.size(); j++){
				area[i][j].c = s[j];
				area[i][j].count = 1;
			}
		}
		int i = 0, j = 0;
		while((area[i][j].c != '.') && (area[i][j].count == 1)){
			move(area, i, j);
		}
		if(area[i][j].c == '.') cout << j << " " << i << endl;
		else cout << "LOOP" << endl;
	}
	return 0;
}