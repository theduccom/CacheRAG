#include <iostream>
#include <string>

using namespace std;

main(){
  char data[2000];
  int size;
  for(int i=0;i<2000;i++){
    scanf("%c", &data[i]);
    if(data[i]=='\n'){
      size=i;
      break;
    }
  }
  for(int i=4;i<size;i++){
    if(data[i-4]=='a' && data[i-3]=='p' && data[i-2]=='p' && data[i-1]=='l' && data[i]=='e'){
      data[i-4]='p';
      data[i-3]='e';
      data[i-2]='a';
      data[i-1]='c';
      data[i]='h';
      i+=4;
      continue;
    }
    if(data[i-4]=='p' && data[i-3]=='e' && data[i-2]=='a' && data[i-1]=='c' && data[i]=='h'){
      data[i-4]='a';
      data[i-3]='p';
      data[i-2]='p';
      data[i-1]='l';
      data[i]='e';
      i+=3;
      continue;
    }
  }
  for(int i=0;i<2000;i++){
    printf("%c", data[i]);
    if(data[i]=='\n') break;
  }
  return 0;
}