#include <iostream>
#include <string>
using namespace std;

void move(string s[12], int i, int j){
	s[i][j] = '0';
	if(i > 0 && s[i-1][j] == '1') move(s,i-1,j);
	if(i < 11 && s[i+1][j] == '1') move(s,i+1,j);
	if(j > 0 && s[i][j-1] == '1') move(s,i,j-1);
	if(j < 11  && s[i][j+1] == '1') move(s,i,j+1);
}
int main(){
	string s;
	string area[12];
	while(cin >> s){
		int count = 0;
		for(int i = 0; i < 12; i++){
			area[i] = s;
			if(i == 11) break;
			cin >> s;
		}
		for(int i = 0; i < 12; i++){
			for(int j = 0; j < 12; j++){
				if(area[i][j] == '1'){
					move(area,i,j);
					count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}