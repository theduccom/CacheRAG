#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

  int a, b;
  char trash;
  int sum=0, ave=0, i=0;

  while(cin >> a >>trash>> b){
    sum += a*b;
    ave += b;
    i++;
  }

  printf("%d\n%.0f\n",sum,(double)ave/i+0.1);

  return 0;
}