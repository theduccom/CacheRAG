#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
  int i, j, k;
	for(i = 1; i < 10;i++){
	for(j = 1; j < 10;j++){
		k=i*j;
		cout<<i<<"x"<<j<<"="<<k<<endl;
	}}
  return 0;
}