#include<iostream>
using namespace std;
#include<algorithm>
#include<string>
#define REP(i,a) for(int  i=0;i<a;i++)
int A[101][101];
int B[101][101];
int main(){
	int a,b=0,c=0,d,n,m;	
	cin>>n>>m;
	while(n!=0||m!=0){
	REP(i,m){
		REP(j,m){
			A[i][j]=10001;
			B[i][j]=10001;
		}
		A[i][i]=0;
		B[i][i]=0;
	}
	REP(i,n){
	cin>>a>>b>>c>>d;
	A[a-1][b-1]=c;
	B[a-1][b-1]=d;	
	A[b-1][a-1]=c;
	B[b-1][a-1]=d;
	}
	REP(k,m){
		REP(i,m){
		if(i==k) continue;
	 		REP(j,m){
		if(i==j)continue;
		A[i][j]=min(A[i][j],A[i][k]+A[k][j]);
		B[i][j]=min(B[i][j],B[i][k]+B[k][j]);
			}
		}	
	}
	cin>>n;
	REP(i,n){
	cin>>a>>b>>c;
	if(c==0) cout<<A[a-1][b-1]<<endl;
	else cout<<B[a-1][b-1]<<endl;
	}
	cin>>n>>m;
	}
	return 0;
}