#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#define REP(i,n) for(int i=0;i<n;i++)
#define FOR(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

int main(void){
	int a[14][14]={};
	int x,y,size;
	int s,m;
	while(scanf("%d,%d,%d",&x,&y,&size)!=EOF){
		x+=2;
		y+=2;
		a[x][y]++;
		a[x-1][y]++;
		a[x+1][y]++;
		a[x][y-1]++;
		a[x][y+1]++;
		if (size>1){
			a[x-1][y-1]++;
			a[x+1][y-1]++;
			a[x-1][y+1]++;
			a[x+1][y+1]++;
			if (size>2){
				a[x-2][y]++;
				a[x+2][y]++;
				a[x][y-2]++;
				a[x][y+2]++;
			}
		}
	}

	s=0; m=0;
	FOR(i,2,11){
		FOR(j,2,11){
			if (a[i][j]==0)
				s++;
			if (a[i][j]>m)
				m=a[i][j];
		}
	}
	cout << s << endl << m << endl;



	return 0;
}