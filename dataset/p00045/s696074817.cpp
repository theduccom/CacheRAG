#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
main(){
  int sum=0,a,b;
  int co=0,c=0;;
  while(~scanf("%d,%d",&a,&b)){
    sum+= a*b;
    co+=b;
    c++;
  }
  printf("%d\n%d\n",sum,(co*10/c+5)/10);
}