#include <stdio.h>
int main() {int N,i;while (scanf("%d",&N)!=EOF && N) {i=0;while (N>=5) N/=5,i+=N;printf("%d\n",i);} return 0;}