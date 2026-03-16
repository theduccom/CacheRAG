#include <iostream>
#include <string>
using namespace std;

int main(){
	string s, ss;
	int v[8][8];
	while(cin >> s){
		int sx = -1, sy = -1;
		if(s[0] == '\n')cin >> s;
		for(int i = 0;i < 8;i++)v[0][i] = s[i]-'0';
		for(int i = 1;i < 8;i++){
			cin >> s;
			for(int j = 0;j < 8;j++)v[i][j] = s[j] - '0';
		}
		
		for(int i = 0;i < 8&&sx==-1;i++){
			for(int j = 0;j < 8&&sx==-1;j++){
				if(v[i][j]){sy = i;sx = j;}
			}
		}
		
		/*for(int i = 0;i < 8;i++){
			for(int j = 0;j < 8;j++){
				cout << v[i][j] << " ";
			}
			cout << endl;
		}*/
		
		char ans = 'a';
		if(sx<7 && v[sy][sx+1]){//A,C,E,G
			if(sx<6){
				if(v[sy][sx+2])ans = 'C';
				else if(sy<7&&v[sy+1][sx+2])ans = 'E';
			}
			if(0<sx && sy<7 && v[sy+1][sx-1])ans = 'G';
			if(ans == 'a')ans = 'A';
		}else{
			if(0<sx && v[sy+1][sx-1])ans = 'D';
			if(sx<7 && v[sy+1][sx+1])ans = 'F';
			if(ans == 'a')ans = 'B';
		}
		cout << ans << endl;
	}
	return 0;
}