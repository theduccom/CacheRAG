#include <stdio.h>
 
int main(void)
{
    char m[102][102];
 
    while(1)
    {
        int h,w,x,y;
        scanf("%d%d",&h,&w);
        if(h==0&&w==0)return 0;
        for(y=0;y<h;y++)
            scanf("%s",m[y]);
        x=0;y=0;
        for(;;)
        {
            h=m[y][x];m[y][x]='!';
            if(h=='!')
            {
                puts("LOOP");
                break;
            }
            else if(h=='v') y++;
            else if(h=='^') y--;
            else if(h=='>') x++;
            else if(h=='<') x--;
            else
            {
                printf("%d %d\n",x,y);
                break;
            }
        }
    }
    return 0;
}