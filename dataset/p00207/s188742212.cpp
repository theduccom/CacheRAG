#include <iostream>
using namespace std;

int ac,w,h,sx,sy,gx,gy,mp[100][100],vx[4]={1,0,-1,0},vy[4]={0,1,0,-1};

int check(int x,int y) {
	int i;
	mp[y][x]=-1;
	if (x==gx && y==gy) return 1;
	for (i=0;i<4;i++) {
		if (x+vx[i]>=0 && x+vx[i]<w && y+vy[i]>=0 && y+vy[i]<h) {
			if (mp[y+vy[i]][x+vx[i]]==ac) {if (check(x+vx[i],y+vy[i])==1) return 1;}
		}
	}
	return 0;
} 

int main() {
	int i,j,k,n,c,d,x,y;
	while(cin >> w >>  h) {
		if (w==0) break;
	for (i=0;i<h;i++) for (j=0;j<w;j++) mp[i][j]=0;	
	cin >> sx >> sy; 
	cin >> gx >> gy;
	sx--; sy--; gx--; gy--;
	cin >> n;
	for (k=0;k<n;k++) {
		cin >> c >> d >> x >> y;
		for (i=0;i<d*2+2;i++) for (j=0;j<4-d*2;j++) mp[y+i-1][x+j-1]=c;
		}
	ac=mp[sy][sx];
	if (mp[gy][gx]!=ac || ac==0) cout << "NG";  else { if (check(sx,sy)==1) cout << "OK"; else cout << "NG";}
	cout << endl;
	}  
	return 0;
}