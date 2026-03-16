#include <stdio.h>
#include <string.h>

int main(void)
{
  int N;
  scanf("%d", &N);

  int i,j,k;
  for(i=0; i<N; ++i){

    int digits[2][80];
    for(j=0; j<2; ++j){
      for(k=0; k<80; ++k){
        digits[j][k] = 0;
      }
    }

    int overflow = 0; 

    for(j=0; j<2; ++j){
      char digit[256];
      scanf("%256s", digit);
      getchar();
      
      if(overflow || strlen(digit)>80){
        overflow = 1;
      }else{
        for(k=0; k<strlen(digit); ++k){
          digits[j][k] = digit[strlen(digit)-1-k]-'0';
        }
      }
    }

    if(!overflow){
      int sum[81];
      for(j=0; j<81; ++j){
        sum[j] = 0;
      }

      for(j=0; j<80; ++j){
        for(k=0; k<2; ++k){
          sum[j] += digits[k][j];
        }
        sum[j+1] += sum[j]/10;
        sum[j] %= 10;
      }

      if(sum[80]>0){
        overflow = 1;
      }else{
        int available = 0;
        for(j=80; j>=0; --j){
          if(available || sum[j]!=0 || j==0){
            available = 1;
            printf("%d", sum[j]);
          }
        }
        printf("\n");
      }
    }

    if(overflow){
      printf("overflow\n");
    }
  }

  return 0;
}