#include <stdio.h>

void leap(int a,int b)
{
    int d = 0;
    for(int i = a;i <= b;i++){
        if(i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)){
            printf("%d\n",i);
            ++d;
        }
    }
    if(d == 0){
        printf("NA\n");
    }
    return;
}

int main(void)
{
    int a,b;
    int e = 0;
    while(1){
        scanf("%d %d",&a,&b);
        if(e >= 1 && (a != 0 && b != 0)){
            printf("\n");
        }
        if(a == 0 && b == 0){
            break;
        }else{
        leap(a,b);
        ++e;
        }
    }
    return 0;
}