#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  double l[10] = {0},v[2] = {0};
  for(;;){
    if(scanf("%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf",&l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&v[0],&v[1]) == EOF){break;}
    for(int i=1; i<10; i++){
      l[i]+=l[i-1];
    }
    double x = l[9]*v[0]/(v[0]+v[1]);
    for(int i=0; i<10; i++){
      if(l[i]+0.000001 >= x){cout <<i+1<<endl;break;}
    }
  }
  return 0;
}