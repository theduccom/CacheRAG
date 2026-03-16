#include <stdio.h>
int main(){
	char c;
	char n;
	while(scanf("%c",&c)!=EOF){
		if(c!='@') printf("%c",c);
		else{
			scanf("%c",&n);
			n-=48;
			scanf("%c",&c);
			for(int i=0;i<n;i++) printf("%c",c);
		}
	}
	return 0;
}