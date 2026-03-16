#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
#define N 100
using namespace std;

void hukugou(char str2[]){
  int i;

  while(1){

    for(i = 0;str2[i] != '\0';i++){
      if(str2[i] != ' ' && str2[i] != '\n' && str2[i] != '.'){
	str2[i] = (str2[i] - 'a' + 1) % 26 + 'a';
      }
    }

    if(strstr(str2, "the") != NULL || strstr(str2, "this") != NULL || strstr(str2, "that") != NULL){
      cout << str2;
      break;
    }
  }

}

int main(){
  char str[N];

  while(fgets(str, sizeof(str), stdin) != NULL){

  hukugou(str);

  }

  return 0;
}