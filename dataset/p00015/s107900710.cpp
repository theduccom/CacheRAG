#include <cstdio>
#include <cstring>

int main(){
 int n;
 scanf("%d\n",&n);
 for(int x = 0;x < n;x++){
  char A[101],B[101];
  scanf("%s\n%s\n",A,B);
  
  int l_a,l_b;
  if((l_a = strlen(A)) > 80 || (l_b = strlen(B)) > 80){
   printf("overflow\n");
   continue;
  }
  int val[100];
  memset(val,-1,sizeof(val));
  for(int i = 0;i < l_a || i < l_b;i++){
   val[i] = 0;
   if(l_a - i > 0) val[i] += A[l_a - i - 1] - '0';
   if(l_b - i > 0) val[i] += B[l_b - i - 1] - '0';
  }
  bool flg = false;
  int max;
  for(int j = 0;val[j] != -1;j++){
   max = j;
   if(val[j] >= 10){
    if(j + 1 >= 80) flg = true;
    else{
        val[j] -= 10;
        if(val[j+1] == -1) val[j+1] = 0;
        val[j + 1]++;
        max = j + 1;
    }
   }
  }
  if(flg || max >= 80){
   printf("overflow\n");
  }else{
   for(;max >= 0;max--){
    printf("%d",val[max]);
   }
   printf("\n");
  }
 }
 return 0;
}