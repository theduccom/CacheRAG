#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int sum_w[1001][1001];
int sum_v[1001][1001];
void vmax(int i,int j,int v[],int w[]){
	if(i==0){
		if(w[i]<=j){
			sum_v[i][j]+=v[i];
			sum_w[i][j]+=w[i];
		}
	}else if(j>=w[i]){
		if(sum_v[i-1][j]<sum_v[i-1][j-w[i]]+v[i]){
			sum_v[i][j]=sum_v[i-1][j-w[i]]+v[i];
			sum_w[i][j]=sum_w[i-1][j-w[i]]+w[i];
		}else{
			sum_v[i][j]=sum_v[i-1][j];
			sum_w[i][j]=sum_w[i-1][j];
		}
	}else{
		sum_v[i][j]=sum_v[i-1][j];
		sum_w[i][j]=sum_w[i-1][j];
	}
}
int main(){
    int count=0;
    while(1){
        int i,j,lim=0,N=0,v[1001],w[1001],k=0,l=0;
        count++;
		for(i=0;i<1001;i++){
			for(j=0;j<1001;j++){
				sum_v[i][j]=0;
				sum_w[i][j]=0;
			}
		}
		cin>>lim;
        if(lim==0)break;
        cin>>N;
        for(i=0;i<N;i++){
            scanf("%d,%d",&v[i],&w[i]);
        }
        for(i=0;i<N;i++){
            for(j=0;j<=lim;j++){
                vmax(i,j,v,w);
            }
        }
        for(i=0;i<=lim;i++){
            if(k<sum_v[N-1][i]){
                k=sum_v[N-1][i];
                l=i;
            }
        }
        cout<<"Case "<<count<<":"<<endl<<sum_v[N-1][l]<<endl<<sum_w[N-1][l]<<endl;
    }
    return 0;
}