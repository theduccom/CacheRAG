#include<cstdio>
int main(){char a[9];puts(*gets(a)&a[2]^a[4]?"Open":"Close");}