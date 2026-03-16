#include <stdio.h>

int main(){
	char str[100];
	int num,i;
	while(scanf("%s",str) != EOF){
		num = 0;
		for(i = 0;str[i] != 0;i++){
			switch(str[i]){
				case 'I':
				if(str[i + 1] == 'V' || str[i + 1] == 'X') num--;
				else num++;
				break;
				case 'V':
				num += 5;
				break;
				case 'X':
				if(str[i + 1] == 'L' || str[i + 1] == 'C') num -= 10;
				else num += 10;
				break;
				case 'L':
				num += 50;
				break;
				case 'C':
				if(str[i + 1] == 'D' || str[i + 1] == 'M') num -= 100;
				else num += 100;
				break;
				case 'D':
				num += 500;
				break;
				case 'M':
				num += 1000;
				break;
			}
		}
		printf("%d\n",num);
	}
	return 0;
}