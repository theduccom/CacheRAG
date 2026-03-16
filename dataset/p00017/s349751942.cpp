#include <stdio.h>
#include <string.h>

static char *words[] = {
  "the",
  "this",
  "that"
};

int main(void)
{
  char cipher[80];
  while(scanf("%[^\n]%*c", cipher) != EOF){

    int i,j,k,l;
    for(i=0; i<26; ++i){

      for(j=0; j<strlen(cipher); ++j){
        if('a'<=cipher[j] && cipher[j]<='z'){
          cipher[j] = (cipher[j]-'a'+1)%26+'a';
        }
      }
      
      int hit = 0;
      for(j=0; !hit && j<(sizeof words/sizeof words[0]); ++j){
        for(k=0; !hit && k+strlen(words[j])<=strlen(cipher); ++k){
          for(l=0; l<strlen(words[j]); ++l){
            if(cipher[k+l]==words[j][l]){
              hit = 1;
            }else{
              hit = 0;
              break;
            }
          }
        }
      }

      if(hit){
        printf("%s\n", cipher);
        break;
      }
    }
  }

  return 0;
}