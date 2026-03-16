#include<cstdio>
main(){int a,b,c,d=0;while(scanf("%d%d",&a,&b),c=a){d++&&puts("");for(;a<=b;a++)c*=printf(a%4<1&&a%25|a%16<1?"%d\n":0,a)<0;c&&puts("NA");}}