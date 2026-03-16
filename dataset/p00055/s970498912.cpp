#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int i,j,n;
  double sum=0,im,im2[1000];

  while(cin >> im){
    sum=0;
    im2[1]=im;
    sum+=im;
    for(i=2;i<=10;i++){
      if(i%2 == 0){
	im2[i]=im2[i-1]*2;
	sum+=im2[i];
      }
      else{
	im2[i]=im2[i-1]/3;
	sum+=im2[i];
      }
      //cout << "im2["<<i<<"] = "<<im2[i]<<endl;

    }

    printf("%.8f\n",sum);

  }

}