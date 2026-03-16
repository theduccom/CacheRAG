#include <cstdio>
#include <numeric>
using namespace std;

int main(){
  int l[10];
  int t1,t2;
  while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d"
	      ,&l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&t1,&t2)>0){
    float p=(accumulate(l,l+10,0)*t1)/(float)(t1+t2);
    for(int i=0;i<10;i++){
      p-=l[i];
      if(p<=0){
	printf("%d\n",i+1);
	break;
      }
    }
  }
  return 0;
}