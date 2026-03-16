#include<cstdio>
using namespace std;
int main(){

  int a[11],b,c;
  
  while(scanf("%d,",&a[1]) != EOF){
    
    a[0] = 0;
    for(int i=2;i<=10;i++){
      scanf("%d,",&a[i]);
      a[i] += a[i-1];
    }
    scanf("%d,%d",&b,&c);
    
    double sum = (double)a[10]/(b+c)*b;
    
    for(int i=1;i<=10;i++){
      if(sum<=a[i]){
	printf("%d\n",i);
	break;
      }
    }
    
  }    

  return (0);
}