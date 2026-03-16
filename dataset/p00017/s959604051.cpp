#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char a[81];
    int size;
    int i,t;
    while(fgets(a,81,stdin)!=NULL){
    size = strlen(a);
    for(t=0;t<26;t++){
        for(i=0;i<size;i++)if(isalpha(a[i]))a[i] = 'a'+(a[i]+1-'a')%26;
        for(i=0;i<size;i++){
            if(a[i]=='t'&&a[i+1]=='h'){
                if(a[i+2]=='e'||(a[i+2]=='i'&&a[i+3]=='s')||(a[i+2]=='a'&&a[i+3]=='t')){
                    printf("%s",a);
                    break;
                }
            }
        }
    }
    }
}