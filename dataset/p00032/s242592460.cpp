#include <stdio.h>

int main(void){
    int a,b,di;
    int rect=0, rhom=0;
    
    while (scanf("%d,%d,%d", &a,&b,&di) != EOF){
        if (a*a+b*b == di*di) rect++;
        if (a==b) rhom++;
    }
    printf("%d\n%d\n", rect,rhom);

    return 0;
}