#include<cstdio>
main(){int a,b,d=0,c;while(scanf("%d%d",&a,&b),a){d++&&puts("");for(c=0;a<=b;a++)if(a%4<1&&a%25||a%16<1)c++,printf("%d\n",a);if(!c)puts("NA");}}