#include<stdio.h>
int main(){
	for(int c;~(c=getchar());putchar(c))
		c>='a'&&c<='z'?c-=32:0;
}