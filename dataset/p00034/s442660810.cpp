#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<string>
using namespace std;
main(){
  int l[10];
  int v[2];
  while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&v[0],&v[1])!=EOF){
    double h;
    double k;
    int res;
    for(int i=0;i<10;i++){
      int j;
      k=0;
      for(j=0;j<=i;j++){
	k+=(double)l[j];
      }
      h=k/(double)v[0];
      k=h*v[1];
      double tk=0;
      for(j=9;j>=0;j--){
	tk+=(double)l[j];
	if(tk >= k) break;
      }
      //printf("%lf %lf   %d : %d\n",h,k,i,j);
      if(i > j){
	double th;
	tk=0;
	for(j=9;j>=i;j--){
	  tk+=(double)l[j];
	}
	k=0;
	for(j=0;j<i;j++)
	  k+=(double)l[j];
	h=k/(double)v[0];
	th=tk/(double)v[1];
	//	printf("%lf->%lf <> %lf->%lf : %d\n",k,h,tk,th,i);
	if(th > h) res=i+1;
	else
	  res=i;
	break;
      }
    }
    printf("%d\n",res);
  }
}