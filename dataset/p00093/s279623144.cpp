#include<cstdio>
main(){int a,b,d=0,c;while(scanf("%d%d",&a,&b),a){if(d++)puts("");c=0;for(;a<=b;a++)if(a%4<1)if(a%25||a%16<1)c++,printf("%d\n",a);if(!c)puts("NA");}}