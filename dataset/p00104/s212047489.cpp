#include <stdio.h>
int main(){
    while (1) {
        int h,w,f=0;
        scanf("%d %d",&h,&w);
        if(h==0&&w==0) return 0;
        char c[h][w];
        int i,x=0,y=0;
        for (i=0; i<h; i++) scanf("%s",c[i]);
        while (1) {
            switch (c[y][x]) {
                case '>':
                    c[y][x]='X';
                    x++;
                    break;
                    
                case '<':
                    c[y][x]='X';
                    x--;
                    break;
                    
                case '^':
                    c[y][x]='X';
                    y--;
                    break;
                    
                case 'v':
                    c[y][x]='X';
                    y++;
                    break;
                    
                case '.':
                    f=1;
                    printf("%d %d\n",x,y);
                    break;
                    
                case 'X':
                    f=1;
                    printf("LOOP\n");
                    break;
            }
            if(f) break;
        }
    }
}