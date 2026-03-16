#include <stdio.h>
#include <string.h>
char h[]="Hoshino";
int main(){
    int n,i;
    scanf("%d ",&n);
    for(i=0;i<n;i++){
        int j,l;
        char s[1001];
        gets(s);
        l=strlen(s);
        for(j=0;j<l-6;j++){
            int k=0;
            while(s[j+k]==h[k]){
                k++;
                if(k==7){
                    s[j+6]='a';
                    k=0;
                    break;
                }
            }
        }
        printf("%s\n",s);
    }
    return 0;
}