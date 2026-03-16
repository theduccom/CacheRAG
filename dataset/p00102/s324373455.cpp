#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main(void){
  int n;
  int tmp;

  while(cin >> n && n){
	int colsum[n+1];

	memset(colsum, 0, sizeof(colsum));
	for(int i=0;i<n;i++){
	  int sum=0;
	  for(int j=0;j<n;j++){
		cin >> tmp;
		printf("%5d", tmp);
		sum += tmp;
		colsum[j] += tmp;
	  }
	  printf("%5d\n", sum);
	  colsum[n] += sum;
	}
	for(int i=0;i<n+1;i++){
	  if(i!=n){
		printf("%5d", colsum[i]);
	  }else{
		printf("%5d\n", colsum[i]);
	  }
	}
  }
  
}