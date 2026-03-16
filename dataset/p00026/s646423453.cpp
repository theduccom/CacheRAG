#include<bits/stdc++.h>
using namespace std;
signed main(void){
	char c;
	int a[25][25];
	memset(a,0,sizeof(a));
	int x,y,m;
	while(cin>>x>>c>>y>>c>>m){
		x+=5;
		y+=5;
		a[x][y]++;
		a[x-1][y]++;
		a[x+1][y]++;
		a[x][y-1]++;
		a[x][y+1]++;
		if(m==1)
			continue;
		a[x-1][y-1]++;
		a[x-1][y+1]++;
		a[x+1][y-1]++;
		a[x+1][y+1]++;
		if(m==2)
			continue;
		a[x-2][y]++;
		a[x+2][y]++;
		a[x][y-2]++;
		a[x][y+2]++;
	}
	int ans1=0,ans2=0;
	for(int i=5;i<15;i++)
		for(int j=5;j<15;j++){
			if(a[i][j]==0)
				ans1++;
			else if(a[i][j]>ans2)
				ans2=a[i][j];
		}
	cout<<ans1<<endl
		<<ans2<<endl;
}