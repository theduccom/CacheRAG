#include <stdio.h>

int main(){
	int n,a=0,b=0,ab=0,o=0;
	char s[10];
	while( scanf("%d,%s", &n , s) != EOF ){
		//if(n==-1)break;
		
		if(s[0]=='A' && s[1]=='B'){
			ab++;
		}else if(s[0]=='A'){
			a++;
		}else if(s[0]=='B'){
			b++;
		}else if(s[0]=='O'){
			o++;
		}
	}
	printf("%d\n%d\n%d\n%d\n", a,b,ab,o);
	return 0;
}