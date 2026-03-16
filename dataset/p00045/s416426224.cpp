#include<iostream>
#include<cstdio>
using namespace std;

int main(){

  int a,b,num = 0;
  double ans = 0,count = 0,ave;
  char c;

  while(cin >> a >> c >> b){

    ans = a * b + ans;
    num = num + b;
    count++;

  }

  ave = num/count;
  ave += 0.5;
  num = ave;

  printf("%.0lf\n%d\n",ans,num);
} 