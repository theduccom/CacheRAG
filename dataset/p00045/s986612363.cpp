#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

int main(){
  int n,m;
  double tmp=0;
  int sum=0,ava=0,cou=0;
  while(scanf("%d,%d",&n,&m) != EOF){
    sum += n * m;
    tmp += m;
    cou++;
  }
  ava = round(tmp/cou);
  cout << sum << endl << ava << endl;
}