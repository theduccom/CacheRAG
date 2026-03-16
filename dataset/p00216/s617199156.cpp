#include<cstdio>
int main(){
  int n,a,b=4280;
  
  scanf("%d",&n);
  
  while(n != -1){
    a = 1150;
    if(n > 30) a += 2650+160*(n-30);
    else if(n > 20) a += 1250+140*(n-20);
    else if(n > 10) a += 125*(n-10);
    printf("%d\n",b-a);
    scanf("%d",&n);
  }
  return (0);
}