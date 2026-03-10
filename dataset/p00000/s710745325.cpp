#include <stdio.h>
int main() {int i,j,k;for (i=1;i<10;i++) for (j=1,k=i;j<10;printf("%dx%d=%d\n",i,j,k),j++,k+=i);return 0;}