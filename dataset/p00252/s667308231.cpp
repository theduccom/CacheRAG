#include<stdio.h>
int main(){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  puts((a==1&&b==1&&c==0)||(a==0&&b==0&&c==1)?"Open":"Close");
  return (0);
}