#include<iostream>
#include<stdio.h>

using namespace std;

double guu(double);
double ki(double);


int main(){

  double a[10], sum;

  while(cin >> a[0]){
    sum = a[0];

    for(int i = 1; i < 10; i++){
      if(i % 2 == 1){
	a[i] = guu(a[i-1]);
	sum += a[i];
      }else{
	a[i] = ki(a[i-1]);
	sum += a[i];
      }
    }
    printf("%.8f\n",sum);

  }

  return 0;

}

    
    

double guu(double x){

  return 2*x;
}

double ki(double x){

  return x / 3;
}