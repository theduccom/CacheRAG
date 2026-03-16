#include<cstdio>
#include<cstring>

int main(){
	char p[7][19] = {"1100000011", "10000000100000001", "1111", "1000000110000001", "11000000011", "100000001100000001", "110000011"};
	char f[65];
	char t;
	while(1 + scanf("%c", &t)){
		while(t == 10){
			scanf("%c", &t);
		}
		f[0] = t;
		for(int i = 1; i < 64; i++){
			scanf("%c", &t);
			while(t == 10){
				scanf("%c", &t);
			}
			f[i] = t;
		}
		f[64] = '\0';
		for(int i = 0; i < 7; i++){
			if(strstr(f, p[i])){
				printf("%c\n", i + 'A');
			}
		}
		scanf("%c", &t);
	}
	return 0;
}