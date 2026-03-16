#include<cstdio>
#include<cstring>
int main(){
    char ar[102];
    while(scanf("%s\n",ar)!=-1){
        int i=0;
        while(i<strlen(ar)){
            if(ar[i]=='@'){
                for(int j=0;j<ar[i+1]-'0';j++){
                    printf("%c",ar[i+2]);
                }
                i+=3;
            }else{
                printf("%c",ar[i]);
                i++;
            }
        }
        printf("\n");
    }
}