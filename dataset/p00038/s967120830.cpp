#include <iostream>
using namespace std;

int main(){
  int card[15];
  int tmp;
  char komma;
  int i, j;
  int flag, flag2, flag3;

  while(cin>>tmp){
    for(i=0; i<15; i++) card[i]=0;
    card[tmp]++;
    for(i=0; i<4; i++){
      cin>>komma>>tmp;
      card[tmp]++;
    }

    flag=0;
    for(i=0; i<15; i++)
      if(card[i]==4) flag=1;
    if(flag){
      printf("four card\n"); continue;
    }
    flag2=0; flag3=0;
    for(i=0; i<15; i++){
      if(card[i]==3) flag=1;
      else if(flag2 && card[i]==2) flag3=1;
      else if(card[i]==2) flag2=1;
    }
    if(flag && flag2){
      printf("full house\n"); continue;
    } else if(flag){
      printf("three card\n"); continue;
    } else if(flag3){
      printf("two pair\n"); continue;
    } else if(flag2){
      printf("one pair\n"); continue;
    }
    if(card[1]=1) card[14]=1;
    for(i=10; i>0; i--){
      tmp=1;
      for(j=0; j<5; j++){
        tmp*=card[i+j];
      }
      if(tmp==1){
        printf("straight\n"); break;
      }
    }
    if(tmp==1) continue;
    printf("null\n");
  }

  return 0;
}