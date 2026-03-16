#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int mp[1001][1001];

int main(){
	int W;char c;
	for(int num = 0;cin >> W&&W;num++){
		int v[1001], w[1001], n;
		cin >> n;
		fill((int*)mp, (int*)(mp+n+1), 0);
		for(int i = 0;i < n;i++)cin >> v[i] >> c >> w[i];
		for(int i = 0;i < n;i++){
			for(int j = 0;j < W+1;j++){
				if(j < w[i])mp[i+1][j] = mp[i][j];
				else mp[i+1][j] = max(mp[i][j], mp[i][j-w[i]]+v[i]);
			}
		}
		int ans = 0;
		for(int i = 1;i < W+1;i++){
			if(mp[n][i] > mp[n][ans])ans = i;
		}
		cout << "Case " << num+1 << ":" << endl;
		cout << mp[n][ans] << endl << ans << endl;
	}
	return 0;
}
/*
1
y eazqyp pnop pngtg ye obmpngt xmybp mr lygw
*/