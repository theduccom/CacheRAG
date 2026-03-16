#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
#include<cstdlib>
#include<iostream>
#define INF 10000000
using namespace std;
int glid[21][21];
int kakutei[21],leng[21];
int main(void)
{
	//ios::sync_with_stdio(false);
	int i,j,k;
	int n,m,a,b,a_b,b_a;
	int start,finish,okane,value,mi,point;
	cin>>n>>m;
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			glid[i][j]=INF;
		}
	}
	for(i=0;i<n;i++) glid[i][i]=0;
	for(i=0;i<m;i++) {
		scanf("%d,%d,%d,%d",&a,&b,&a_b,&b_a);
		a--;b--;
		glid[a][b]=a_b;
		glid[b][a]=b_a;
	}
	scanf("%d,%d,%d,%d",&start,&finish,&okane,&value);
	start--;finish--;
	for(i=0;i<n;i++) {leng[i]=INF;kakutei[i]=0;}
	leng[start]=0;
	for(i=0;i<n;i++) {
		mi=INF;
		for(j=0;j<n;j++) {
			if(kakutei[j]==0 && leng[j]<mi) {
				point=j;
				mi=leng[j];
			}
		}
		kakutei[point]=1;
		mi=INF;
		for(j=0;j<n;j++) {
			if(leng[point]+glid[point][j]<leng[j]) {
				leng[j]=leng[point]+glid[point][j];
			}
		}
	}
	okane-=leng[finish];
	for(i=0;i<n;i++) {leng[i]=INF;kakutei[i]=0;}
	swap(start,finish);
	leng[start]=0;
	for(i=0;i<n;i++) {
		mi=INF;
		for(j=0;j<n;j++) {
			if(kakutei[j]==0 && leng[j]<mi) {
				point=j;
				mi=leng[j];
			}
		}
		kakutei[point]=1;
		for(j=0;j<n;j++) {
			if(leng[point]+glid[point][j]<leng[j]) {
				leng[j]=leng[point]+glid[point][j];
			}
		}
	}
	okane-=leng[finish];
	cout<<okane-value<<endl;
	return 0;
}