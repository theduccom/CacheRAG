#include<stdio.h>
/*与えられた期間の間のうるう年をすべて出力*/
void leap_year(int year1, int year2);

int main(void)
{
    while (1){
        int a, b; /*a は year1　, b は year2*/
         /*cは一行目の空行をさせないために使う*/
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0){
            break;
        }else {
            leap_year(a, b);
        }
    }
    return 0;
}

void leap_year(int year1, int year2)
{   
    static int c = 0;
    ++c;
    if (c != 1){
        printf("\n");
    }
    int limit = 0; /*もしも、うるう年がなかった時に使う*/
    for (int i = year1; i <= year2; ++i){ /*i は年を表す*/     
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0){
            printf("%d\n", i);
        }else{
            ++limit;
        }
    }
    if (limit == (year2 - year1 + 1)){/*うるう年がない場合*/
        printf("NA\n");
    }
} 