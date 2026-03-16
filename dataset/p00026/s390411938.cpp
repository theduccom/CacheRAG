#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
#define int long long
signed main(){
	int x,y,t;
	vector<vector<int>> v(14, vector<int>(14,0));
	while( scanf("%lld,%lld,%lld", &x, &y, &t) != EOF ){
		x+=2;
		y+=2;
		switch (t) {
			case 3:
				v[x][y-2]++;
				v[x][y+2]++;
				v[x-2][y]++;
				v[x+2][y]++;
			case 2:
				v[x-1][y-1]++;
				v[x-1][y+1]++;
				v[x+1][y-1]++;
				v[x+1][y+1]++;
			case 1:
				v[x+1][y]++;
				v[x-1][y]++;
				v[x][y-1]++;
				v[x][y+1]++;
				v[x][y]++;
				break;
		}
	}
	int z=0;
	int mx=-1;
	for(int i=2;i<12;i++){
		for(int j=2;j<12;j++){
			if(v[i][j]==0) z++;
			mx = max(mx, v[i][j]);
		}
	}
	cout << z << endl;
	cout << mx << endl;
	return 0;
}