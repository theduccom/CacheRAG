#include<bits/stdc++.h>
using namespace std;

int main(){

  int a,b,c;
  int sum1=0,sum2=0;
  while(scanf("%d,%d,%d",&a,&b,&c)!=EOF){
    if(a*a+b*b==c*c)sum1++;
    else  if(a==b)sum2++;
  }

  cout << sum1 << endl << sum2 << endl;

  return 0;
}