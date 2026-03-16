#include <stdio.h>
#include <string.h>

int main(void){
	int map[255];
	map['I'] = 1;
	map['V'] = 5;
	map['X'] = 10;
	map['L'] = 50;
	map['C'] = 100;
	map['D'] = 500;
	map['M'] = 1000;
	int sum = 0;
	char in[101];
	int len;

	while(scanf("%s", in) != EOF){
		len = strlen(in);
		int i = 0;
		sum = 0;
		for(i=0; i<len-1; ++i){
			if(map[in[i]] < map[in[i+1]]){
				sum += map[in[i+1]] - map[in[i]];
				i++;
			}else{
				sum += map[in[i]];
			}
		}
		if(i<len){ sum += map[in[i]]; }
		printf("%d\n", sum);
	}
	return 0;
}