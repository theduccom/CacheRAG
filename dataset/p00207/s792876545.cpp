#include <iostream>
using namespace std;

int F[102][102];
int cnt=0;

void DFS(int XS, int YS, int XG, int YG, int e){
	if(F[XS][YS]!=e){
		return;
	}
	if(XS==XG&&YS==YG){
		cnt++;
	}
	F[XS][YS]=0;

	DFS(XS-1,YS  ,XG,YG,e);
	DFS(XS  ,YS+1,XG,YG,e);
	DFS(XS+1,YS  ,XG,YG,e);
	DFS(XS  ,YS-1,XG,YG,e);
}

int main(){
	while(true){
		int w,h;
		cin>>w>>h;
		if(w==0&&h==0)
			break;
		for(int i=0; i<=102; i++){
			for(int j=0; j<=102; j++){
				F[j][i]=0;
			}
		}
		cnt=0;
		int xs,ys;
		cin>>xs>>ys;
		int xg,yg;
		cin>>xg>>yg;
		int n;
		cin>>n;
		int c[n];
		int d[n], x[n], y[n];
		for(int i=0; i<n; i++){
			cin>>c[i]>>d[i]>>x[i]>>y[i];
		}
		for(int i=0; i<n;  i++){
			if(d[i]==0){
				F[x[i]  ][y[i]]=c[i];	F[x[i]  ][y[i]+1]=c[i];
				F[x[i]+1][y[i]]=c[i];	F[x[i]+1][y[i]+1]=c[i];
				F[x[i]+2][y[i]]=c[i];	F[x[i]+2][y[i]+1]=c[i];
				F[x[i]+3][y[i]]=c[i];	F[x[i]+3][y[i]+1]=c[i];
			}
			else{
				F[x[i]][y[i]  ]=c[i];	F[x[i]+1][y[i]  ]=c[i];
				F[x[i]][y[i]+1]=c[i];	F[x[i]+1][y[i]+1]=c[i];
				F[x[i]][y[i]+2]=c[i];	F[x[i]+1][y[i]+2]=c[i];
				F[x[i]][y[i]+3]=c[i];	F[x[i]+1][y[i]+3]=c[i];
			}
		}
		if(F[xs][ys]!=0){
			if(F[xg][yg]!=0){
				DFS(xs,ys,xg,yg,F[xs][ys]);
			}
		}
		if(cnt==1){
			cout<<"OK"<<endl;
		}
		else{
			cout<<"NG"<<endl;
		}
	}
	return 0;
}