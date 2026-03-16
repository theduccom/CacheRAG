#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

int main(){
  int a[1000],b[1000],c[1000],i,j,cnt=0,cnt2=0;

  j=0;
  while(scanf("%d,%d,%d",&a[j],&b[j],&c[j])!=EOF){
    if(a[j] == b[j])cnt2++;
    else if(pow(a[j],2)+pow(b[j],2) == pow(c[j],2))cnt++;

    j++;
  }  

  cout << cnt << endl;
  cout << cnt2 << endl;


}