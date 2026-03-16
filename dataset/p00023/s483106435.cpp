#include <iostream>
#include <algorithm>
#include <cmath>
#define EPS 0.000000001
using namespace std;

double X[2][60],Y[2][60],R[2][60];
int res[60];
int main(){
	int N;
	cin>>N;
	for(int i=1;i<=N;i++){
		for(int j=0;j<2;j++){
			cin>>X[j][i]>>Y[j][i]>>R[j][i];
		}
	}

	double re;
	for(int i=1;i<=N;i++){
		re=pow(X[0][i]-X[1][i],2)+pow(Y[0][i]-Y[1][i],2);
		if(re>pow(R[0][i]+R[1][i],2)){
			res[i]=0;
		}
		else if(re>=pow(R[0][i]-R[1][i],2)){
			res[i]=1;
		}
		else if(R[0][i]>R[1][i]){
			res[i]=2;
		}
		else res[i]=-2;
	}
	for(int i=1;i<=N;i++){
		cout<<res[i]<<endl;
	}
	return 0;
}