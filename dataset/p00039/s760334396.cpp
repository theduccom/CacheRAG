#include<cstdio>
#include<cstring>

int main(){
	char c;
	char s[20];
	int i, sum;
	while(1 + scanf("%s", &s)){
		i = 0, sum = 0;

		while(s[i]){
			switch(s[i]){
				case 'M':
					sum += 1000;
					break;
				case 'D':
					sum += 500;
					break;
				case 'C':
					sum += 100;
					break;
				case 'L':
					sum += 50;
					break;
				case 'X':
					sum += 10;
					break;
				case 'V':
					sum += 5;
					break;
				case 'I':
					sum += 1;
					break;
			}
			i++;
		}
		if(strstr(s, "CM") || strstr(s, "CD")){
			sum -= 200;
		}
		if(strstr(s, "XC") || strstr(s, "XL")){
			sum -= 20;
		}
		if(strstr(s, "IX") || strstr(s, "IV")){
			sum -= 2;
		}
		printf("%d\n", sum);
	}
	return 0;
}