#include<stdio.h>
int miny,maxy;
int cou1=0,cou2=0;

int main()
{
    while(1)
    {
        scanf("%d%d",&miny,&maxy);
        if(miny==0&&maxy==0)break;
        if(cou2!=0)printf("\n");
        cou1=0;
        for(int i=miny;i<=maxy;i++)
        {
            if((i%4==0&&i%100!=0)||i%400==0)
            {
                printf("%d\n",i);
                cou1++;
            }
        }
        if(cou1==0)printf("NA\n");
        cou2++;
    }
    return 0;
}