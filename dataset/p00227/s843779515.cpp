#include<stdio.h>
int main(){
  int m,n,a[1000],i,k,st,c;
  while(1){
    c=0;
    scanf("%d%d",&n,&m);
    if(n==0&&m==0)break;
    k=n;
    for(i=0;i<n;i++){
      scanf("%d",&a[i]);
    }
    while(k!=0){
      for(i=1;i<k;i++){
	if(a[i-1]>a[i]){
	  st=a[i];
	a[i]=a[i-1];
	a[i-1]=st;
	}
      }
	k--;
    }
    for(i=n;i>=0;i-=m){
      a[i]=0;
    }
    for(i=0;i<n;i++){
      c+=a[i];
    }
    printf("%d\n",c);
  }
  return 0;
}