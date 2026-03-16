#include<stdio.h>

void dividing_student(int a, int b, int c);

int main(void)
{
    while(1){
        int n;/*nはデータの個数*/
        scanf("%d", &n);    
        if(n == 0){
            break;
        }else{
            for( int i = 0; i < n; ++i){
                int pm ,pe, pj; /*左から数学、英語、国語の点数*/
                scanf("%d %d %d", &pm, &pe, &pj);
                dividing_student( pm, pe, pj);
            }
        }
    }
    return 0;
}

void dividing_student( int a, int b, int c)
{
    if( a >= 100|| b >= 100 || c >=100){
        printf("A\n");
    }else if( (a + b) / 2 >= 90){
        printf("A\n");
    }else if( (a + b + c) / 3 >= 80){
        printf("A\n");
    }else if( (a + b + c) / 3 >= 70){
        printf("B\n");
    }else if((a + b + c) / 3 >= 50 && (a >= 80 || b >= 80)){
        printf("B\n");
    }else{
        printf("C\n");
    }
}    
    