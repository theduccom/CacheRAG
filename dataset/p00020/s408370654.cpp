#include<stdio.h>
int main(){for(char c;scanf("%c",&c)!=-1;)putchar((c>96)?(c-32):c);}