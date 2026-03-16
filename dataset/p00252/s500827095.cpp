#include<cstdio>
int main(){char a[9];gets(a);puts(*a&a[2]^a[4]?"Open":"Close");}