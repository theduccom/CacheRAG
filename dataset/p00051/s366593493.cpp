#include <stdio.h>
using namespace std;
#include <iostream> 

int main(void){
  int n, i, j, k;
  int num[50], high[50], low[50];
  char str[50][10], tmp;

  scanf("%d", &n);

  for (i=0;i<n;i++) {
    scanf("%s",str[i]);
  }

  for (k=0;k<n;k++) {
    for (i=0;i<7;i++) {
      for ( j=7;j>i;j--) {
        if (str[k][j-1] > str[k][j]) {
        	tmp = str[k][j-1];
        	str[k][j-1] = str[k][j];
        	str[k][j] = tmp;
        }
      }
    }
    low[k]= atoi(str[k]);
    //printf("%d\n",low[k]);
  }

  for (k=0;k<n;k++) {
    for (i=0;i<7;i++) {
      for ( j=7;j>i;j--) {
        if (str[k][j-1] < str[k][j]) {
        	tmp = str[k][j-1];
        	str[k][j-1] = str[k][j];
        	str[k][j] = tmp;
        }
      }
    }
    high[k]= atoi(str[k]);
    //printf("%d\n",high[k]);
  }

  for(i=0;i<n;i++)
  printf("%d\n", high[i]-low[i]);

  return 0;
}
