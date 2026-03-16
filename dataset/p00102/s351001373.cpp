#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int n;
	int matrix[100][100];
	while(cin >> n){
		if(n==0) return 0;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >> matrix[i][j];
			}
		}
		int sumX[100],sumY[100],sum=0;		
		for(int i=0; i<n; i++){
			sumX[i]=0; sumY[i]=0;
			for(int j=0; j<n; j++){
				sumX[i] += matrix[j][i];
				sumY[i] += matrix[i][j];
			}
			sum+=sumX[i];
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				printf("%5d",matrix[i][j]);
			}
			printf("%5d\n",sumY[i]);
		}
		for(int i=0; i<n; i++) printf("%5d",sumX[i]);
		printf("%5d\n",sum);
		
	}
}