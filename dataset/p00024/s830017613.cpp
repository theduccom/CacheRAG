#include <stdio.h>
#include <float.h>

int main(void)
{
  int i=0;
  long double v,floar;

  while(scanf("%Lf", &v) != EOF && i<50){
    floar = (v*v/98)+1;  
    if(floar - (int)floar > LDBL_EPSILON){
      floar++;
    }
    printf("%d\n", (int)floar);
    i++;  
  }
  return 0;
}