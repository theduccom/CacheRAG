#include<cstdio>
#include<algorithm>
using namespace std;
int main(){

  int n,a,b,c,num,ma;
  scanf("%d",&n);
  while(n != 0){
    
    for(int i=0;i<n;i++){
      scanf("%d %d %d",&a,&b,&c);
      if(i == 0 || ma<b+c ){
	num = a;
	ma = b+c;
      }
    }

    printf("%d %d\n",num,ma);
    scanf("%d",&n);
  }

  return (0);
}