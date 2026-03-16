#include<iostream>
using namespace std;

int main(){
  int n;
  int matrix[10][10];
  int rowsum[10],colsum[10];
  int total;

  while(1){
    cin >> n;
    if(!n)break;

    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
	cin >> matrix[i][j];
      }
    }
    for(int i=0;i<n;i++){
      rowsum[i] = 0;
      colsum[i] = 0;
    }
    total = 0;

    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
	printf("%5d",matrix[i][j]);
	rowsum[i] += matrix[i][j];
	colsum[j] += matrix[i][j];
      }
      printf("%5d\n",rowsum[i]);
    }

    for(int i=0;i<n;i++){
      printf("%5d",colsum[i]);
      total += colsum[i];
    }
    printf("%5d\n",total);
  }
}