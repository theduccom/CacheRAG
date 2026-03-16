#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
  while(1){
    double a[3];
    int b,c;
    cin>>a[0]>>a[1]>>a[2];
    if(a[0]==0&&a[1]==0&&a[2]==0)break;
    sort(a,a+3);
    cin>>b;
    for(int i=0;i<b;i++){
      cin>>c;
      if(c*2>sqrt(pow(a[0],2)+pow(a[1],2)))printf("OK\n");
      else printf("NA\n");
    }
  }
  return 0;
}