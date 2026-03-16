#include <iostream>
using namespace std;

int r[]={-1,0,0,1}, l[]={0,1,-1,0};
int func(int a[10][10], int x, int y){
	if(a[x][y] != 1)return 0;
	a[x][y] = 0;
	for(int i = 0;i < 4;i++){
		for(int j = 1;j <= 3;j++){
			int xx = r[i]*j+x, yy = l[i]*j+y;
			if(0<xx&&xx<9&&0<yy&&yy<9)func(a, xx, yy);
		}
	}
}

int main(){
	string s;
	int n, x, y, sum, a[10][10];
	cin >> n;
	for(sum = 1;sum <= n;sum++){
		getline(cin, s);
		fill((int*)a, (int*)(a+10), -1);
		for(int i = 1;i <= 8;i++){
			cin >> s;
			for(int j = 1;j <= 8;j++)a[i][j] = s[j-1]-'0';
		}
		cin >> y >> x;
		func(a, x, y);
		
		cout << "Data " << sum << ":" << endl;
		for(int i = 1;i <= 8;i++){
			for(int j = 1;j <= 8;j++)cout << a[i][j];
			cout << endl;
		}
	}
	return 0;
}