#include <cstdio>
#include <cstring>
using namespace std;
#define def 1000

int main(void){
  int i,j,n,len,tmp,max,digits,A[def],B[def],C[def];
  char str[def];

  fgets(str,sizeof(str),stdin);
  sscanf(str,"%d",&n);
  for(i=0;i<n;i++){
    memset(A,0,sizeof(A));
    memset(B,0,sizeof(B));
    memset(C,0,sizeof(C));
    tmp = 0;
    digits = 0;
    /*for(j=0;j<5;j++){
      printf("%d",A[j]);
    }
    printf("\n");*/
    fgets(str,sizeof(str),stdin);
    len = strlen(str)-2;
    max = len;
    digits = max+1;
    //printf("%d\n",len);
    for(j=len;j>=0;j--){
      A[len-j] = str[j]%48;
      //printf("%d",A[len-j]);
    }
    //printf("\n");
    fgets(str,sizeof(str),stdin);
    len = strlen(str)-2;
    if(len>max){
      max = len;
      digits = max+1;
    }
    for(j=len;j>=0;j--){
      B[len-j] = str[j]%48;
      //printf("%d",A[len-j]);
    }
    for(j=0;j<=max;j++){
      //printf("%d ",(A[j] + B[j] + tmp)%10);
      C[max+1-j] = (A[j] + B[j] + tmp)%10;
      tmp = (A[j] + B[j] + tmp)/10;
      //printf("%d\n",tmp);
      if(j==max && tmp!=0){
        C[0] = tmp;
        digits += 1;
      }
      if(digits>80){
        printf("overflow");
        goto end;
      }
      //printf("%d",B[len-j]);
    }
    for(j=0;j<=max+1;j++){
      if(j==0 && C[j]==0) continue;
      printf("%d",C[j]);
    }
    end:;
    printf("\n");
    //Calculation(A,B);
  }
  return 0;
}