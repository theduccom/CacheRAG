#include<stdio.h>
#include<string.h>

int main(void){
  char sentence[1050];
  int n;
  scanf("%d\n",&n);
  for(int i=0;i<n;i++){
        for(int j=0;j<1050;j++){
            sentence[j]=getchar();
            if(sentence[j]=='\n'){
                sentence[j]=0;
                break;
            }
        }
    for(int j=0;j<1025;j++){
        if(sentence[j]==0)break;
        if(!strncmp(sentence+j,"Hoshino",7)){
            sentence[j+6]='a';
        }
    }
    puts(sentence);
  }
  return 0;
    
}