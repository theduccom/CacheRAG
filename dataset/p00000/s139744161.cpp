#include<cstdio>
int x=1,y=1;main(){if(y>=10)return 0;printf("%dx%d=%d\n",y,x,x*y);++x;(x==10)?x=1,++y:0;main();}