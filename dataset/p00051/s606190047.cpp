#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
main(){
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    int m;
    scanf("%d",&m);
    int b[11]={};
    int j=0;
    while(m>0){
      b[j]=m%10;
      m/=10;
      j++;
    }
    /*    for(int k=0;k<j;k++) printf("%d",b[k]);
    puts("");
    printf("%d\n",j);
    for(int k=0;k<j;k++) printf("%d",b[k]);
    puts("");*/
    sort(b,b+j);
    int maxx=0,minn=0;
    for(int k=0,keta=1;k<j;k++,keta*=10){
      maxx+=b[k]*keta;
    }
    for(int k=j-1,keta=1;k>-1;k--,keta*=10){
      minn+=b[k]*keta;
    }
    printf("%d\n",maxx-minn);
  }
}