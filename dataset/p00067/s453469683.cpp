#include <iostream>
using namespace std;
bool b[14][14];
int r[]={-1,0,0,1}, l[]={0,1,-1,0};

int func(int a[14][14], int x, int y){
	if(a[x][y] == 0 || a[x][y] == -1 || b[x][y])return 0;
	b[x][y] = true;
	for(int i = 0;i < 4;i++)func(a, x+r[i], y+l[i]);
	return 0;
}

int main(){
	int a[14][14];
	string s;
	while(cin >> s){
		if(s == "")cin >>s;
		fill((int*)a, (int*)(a+14), -1);
		fill((int*)b, (int*)(b+14), 0);
		int ans = 0;
		for(int i = 1;i <= 12;i++){
			if(i != 1)cin >> s;
			for(int j = 1;j <= 12;j++)a[i][j] = s[j-1]-'0';
		}
		for(int i = 1;i <= 12;i++){
			for(int j = 1;j <= 12;j++){
				if(!b[i][j] && a[i][j]){func(a, i, j);ans++;}
			}
		}
		cout << ans << endl;
		/*for(int i = 0;i < 14;i++){
			for(int j = 0;j < 14;j++)cout << a[i][j] << " ";
			cout << endl;
		}*/
	}
	return 0;
}