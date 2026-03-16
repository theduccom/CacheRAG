#include <stdio.h>

int ball[3];

int swap(int a, int b){
  ball[a] += ball[b];
  ball[b] = ball[a] - ball[b];
  ball[a] = ball[b] - ball[a];
}

int main(){
  char x,y;
  ball[0]=1;
  ball[1]=ball[2]=0;
  while(scanf(" %c,%c", &x,&y)!=EOF){
    swap(x-'A', y-'A');
  }
  if(ball[0]) puts("A");
  else if(ball[1]) puts("B");
  else puts("C");
}