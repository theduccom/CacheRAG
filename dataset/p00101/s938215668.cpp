#include <stdio.h>
int main(){
    int n,now;
    char c;
    bool f;
    while(scanf("%d\n",&n)!=EOF){
        now=0;
        while(now<n){
            scanf("%c",&c);
            f=true;
            while(c=='H'){
                scanf("%c",&c);
                if(c=='o'){
                    scanf("%c",&c);
                    if(c=='s'){
                        scanf("%c",&c);
                        if(c=='h'){
                            scanf("%c",&c);
                            if(c=='i'){
                                scanf("%c",&c);
                                if(c=='n'){
                                    scanf("%c",&c);
                                    if(c=='o'){
                                        printf("Hoshina");
                                        f=false;
                                    }
                                    else printf("Hoshin");
                                }
                                else printf("Hoshi");
                            }
                            else printf("Hosh");
                        }
                        else printf("Hos");
                    }
                    else printf("Ho");
                }
                else printf("H");
            }
            if(f)printf("%c",c);
            if(c=='\n')now++;
        }
    }
}