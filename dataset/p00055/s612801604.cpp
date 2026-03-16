#include<bits/stdc++.h>
using namespace std;

int main(){
  double a;
  while(cin >> a){
    double sum = a;
    double now = a;
    for(int i=2;i<=10;i++){
      if(i%2 == 0){
	now *= 2.0;
      } else {
	now /= 3.0;
      }
      sum += now;
    }
    printf("%.8f\n",sum);
  }
}