#include <stdio.h>

int main(){
  int data[10];
  int v,w;
  while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", data, data+1, data+2, data+3, data+4, data+5, data+6, data+7, data+8, data+9, &v, &w)!=EOF){
    for(int i=1;i<10;i++) data[i] += data[i-1];

    double x = data[9]*v/(double)(v+w);

    for(int i=0;i<10;i++) {
      if(data[i] >= x){
        printf("%d\n", i+1);
        break;
      }
    }
  }
}