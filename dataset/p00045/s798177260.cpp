#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
  int n,m;
  int tmp=0;
  int sum=0,ava=0,cou=0;
  while(scanf("%d,%d",&n,&m) != EOF){
    sum += n * m;
    tmp += m;
    cou++;
  }
  ava = (int)(tmp / (double)cou + 0.5);
  cout << sum << endl << ava << endl;
}