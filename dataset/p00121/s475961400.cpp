#include <cstdio>
#include <algorithm>
#include <queue>

#define EiP 40320
#define MAX 100000
using namespace std;

int dis[EiP];
int vx[] = {0,0,1,-1};
int vy[] = {1,-1,0,0};
int a[8]={0,1,2,3,4,5,6,7};
int ans;


void IntegerToMatrix(int n,int* a){
	int rank=1;
	for(int i=2;i<9;i++) rank *= i;
	bool b[8];
	for(int i=0;i<8;i++) b[i] = true;
	
	for(int i=0;i<8;i++){
		rank = rank/(8-i);
		int j,sum=0;
		for(j=0;j<8;j++){
			if(b[j]) sum++;
			if(sum == n/rank+1) break;
		}
		b[j] = false;
		a[i] = j;
		n = n%rank;
	}
}

void MatrixToInteger(int a[8], int* n){
	int l=7; *n = 0;
	bool b[8];
	for(int i=0;i<8;i++) b[i] = true;
	for(int i=0;i<7;i++){
		int sum=0;
		b[a[i]] = false;
		for(int j=0;j<a[i];j++)
			if(b[j]) sum++;
		*n = (7-i)*(*n+sum);
	}
}

void trade(int a[8], int b, int c){
	int k = a[b];
	a[b] = a[c];
	a[c] = k;
}

void set(){
	queue<int> que;
	MatrixToInteger(a,&ans);
	dis[ans] = 0;
	que.push(ans);
	
	int c[8];
	while(!que.empty()){
		int v=que.front(); que.pop();
		IntegerToMatrix(v,c);
		int z;
		for(int i=0;i<8;i++)
			if(c[i] == 0) z = i;
		for(int i=0;i<4;i++){
			int px,py;
			px = z/4 + vx[i];
			py = z%4 + vy[i];
			if(-1<px&&px<2&&-1<py&&py<4){
				int id,pz;
				pz = 4*px+py;
				trade(c,z,pz);
				MatrixToInteger(c,&id);
				if(dis[v]+1<dis[id]){
					que.push(id);
					dis[id] = dis[v]+1;
				}
				trade(c,z,pz);
			}
		}
	}
}

void solve(){
	MatrixToInteger(a,&ans);
	printf("%d\n",dis[ans]);
}

int main(){
	for(int i=0;i<EiP;i++) dis[i] = MAX;
	set();
	for(int p=0;p<1000;p++){
		for(int i=0;i<8;i++){
			if(EOF == scanf(" %d",&a[i])){
				return 0;
			}
		}
		solve();
	}
	return 0;
}