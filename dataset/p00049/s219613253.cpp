#include <stdio.h>
int main(){
    int ban,a=0,b=0,ab=0,o=0;
    char gata[3]={0};
    while(scanf("%d,%s",&ban,gata)!=EOF){
        if(gata[0]=='A'){
            if(gata[1]=='B'){
                ab++;}else{
                    a++;
                }
            }
        if(gata[0]=='B'){
            b++;
        }
        if(gata[0]=='O'){
            o++;
        }
    }
    printf("%d\n%d\n%d\n%d\n",a,b,ab,o);
	return 0;
}