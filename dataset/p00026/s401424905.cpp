#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>
#include<stack>
#include<cmath>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)


#define X real()
#define Y imag()
typedef complex<double> P;

int main(){
	const int N = 10;
	int masu[N][N]={0};
	int a,b,c;
	while(scanf("%d,%d,%d",&a,&b,&c)!=EOF){
		string hit[4][5]={
			{"","","","",""},
			{
				"00000",
				"00100",
				"01110",
				"00100",
				"00000",
			},
			{
				"00000",
				"01110",
				"01110",
				"01110",
				"00000",
			},
			{
				"00100",
				"01110",
				"11111",
				"01110",
				"00100",
			},
		};
		
		a-=2;
		b-=2;
		
		rep(i,5){
			rep(j,5){
				int x = a+i;
				int y = b+j;
				if(x<0 || y<0 || x>=N || y>=N)continue;
				masu[y][x] += hit[c][i][j]-'0';
			}
		}
		
	}
	int z = 0;
	int p = 0;
	
	rep(i,N)rep(j,N){
		if(masu[i][j]==0)z++;
		p=max(p,masu[i][j]);
	}
	
	printf("%d\n%d\n",z,p);
	
}