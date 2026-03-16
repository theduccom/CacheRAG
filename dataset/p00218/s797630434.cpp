#include <stdio.h>
void classchecker(int m,int e,int j);
int main(void){
    int loop,pm,pe,pj;
    while(1)
    {
        scanf("%d", &loop);
        if(loop == 0)
        {
            break;
        }
        for(int i=0;i<loop;i++){
            scanf("%d %d %d", &pm , &pe, &pj);
            classchecker(pm,pe,pj);
        }
    }

    return 0;
}
void classchecker (int m, int e, int j)
{
    if (m == 100 || e == 100 || j == 100)
    {
        printf("A\n");
    } else if (m + e >= 180)
    {
        printf("A\n");
    } else if (m + e + j >= 240)
    {
        printf("A\n");
    } else if (m + e + j >= 210)
    {
        printf("B\n");
    } else if (m + e + j >= 150 && (m >= 80 || e >= 80))
    {
        printf("B\n");
    }else {
        printf("C\n");
    }
    return;
}