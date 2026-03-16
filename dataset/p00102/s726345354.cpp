#include<stdio.h>

int main(){
  while(1){
    int i,j,n;
    int a[10][10];
    scanf("%d", &n);
    if(n!=0){
      for(i=0;i<n;i++){
	for(j=0;j<n;j++){
	  scanf("%d", &a[i][j]);
	}
      }

      for(i=0;i<n;i++){
	int m=0;
	for(j=0;j<n;j++){
	  m+=a[i][j];
	  printf("%5d", a[i][j]);
	}
	printf("%5d\n", m);
      }
      int k=0;
      for(j=0;j<n;j++){
	int l=0;
	for(i=0;i<n;i++){
	  l+=a[i][j];
	}
	printf("%5d", l);
	k+=l;
      }
      printf("%5d\n", k);
    }

    else
      break;
  }
  return 0;
}