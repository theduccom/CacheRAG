#include <cstdio>

int main(){
  int i,j,n,a[10][10],b[10],c[10],sum;
  while(1){

    scanf("%d",&n);
    if(n == 0) break;
    sum = 0;

    for(i=0;i<n;i++){
      b[i] = 0;
      for(j=0;j<n;j++){
	scanf("%d",&a[i][j]);
	b[i] += a[i][j];
	sum += a[i][j];
      }
    }
    for(i=0;i<n;i++){
      c[i] = 0;
      for(j=0;j<n;j++){
	c[i] += a[j][i];
      }
    }

    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
	printf("%5d",a[i][j]);
      }
      printf("%5d\n",b[i]);
    }
    for(i=0;i<n;i++){
      printf("%5d",c[i]);
    }
    printf("%5d\n",sum);

  }
  return 0;
}