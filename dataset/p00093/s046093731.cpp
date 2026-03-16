#include <iostream>
#include <cstdio>
int main(){
	int a, b, d = 0;
	while(scanf("%d%d", &a, &b), a && b){
		if(d)puts("");
		else d = 1;
		int c = 0;
		for(;a<=b;a++){
			if(a % 4 == 0){
				if(a % 100 == 0){
					if(a % 400 == 0){c++, printf("%d\n", a);}
				}
				else c++, printf("%d\n", a);
			}
		}
		if(!c)puts("NA");
	}
}