#include <stdio.h>
#include <stdbool.h>
   
int lpyrJudge(int x, int y);
   
int main(void)
{
    int sta, fin;
    int judgecount = 0;
    while (true) {
        scanf("%d %d", &sta, &fin);
        if (sta == 0 && fin == 0) {
            break;
        } else {
            if (judgecount != 0) {
                printf("\n");
            }
            lpyrJudge(sta, fin);
        }
        judgecount++;
    }
    return 0;
}
   
int lpyrJudge(int x, int y)
{
    int minmod4x;   //x??\?????????????°????4???????????°
    if (x % 4 == 0){
        minmod4x = x;
    } else {
        minmod4x = x - x % 4 + 4;
    }
    if (y - minmod4x < 0) {
        printf("NA\n");
    } else {
        for (int i = minmod4x; i <= y; i = i + 4) {
            if (i % 100 == 0) {
                if(i % 400 == 0) {
                    printf("%d\n", i);
                } else {    //??????????????????????????????
                }
            } else {
                printf("%d\n", i);
            }
        }
    }
    return 0;
} 