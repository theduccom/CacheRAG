#include<iostream>
using namespace std;

int r[400][4];
int d[21][21];

int main(){
	int n,m,x1,x2,y1,y2,i,j,k;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			d[i][j]=1000000;
		}
	}
	for(i=0;i<m;i++){
		scanf("%d,%d,%d,%d",&r[i][0],&r[i][1],&r[i][2],&r[i][3]);
		d[r[i][0]][r[i][1]]=r[i][2];
		d[r[i][1]][r[i][0]]=r[i][3];
	}
	scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2);
	for(k=1;k<=n;k++){
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
			}
		}
	}
	cout<<y1-y2-d[x1][x2]-d[x2][x1]<<endl;
	return 0;
}