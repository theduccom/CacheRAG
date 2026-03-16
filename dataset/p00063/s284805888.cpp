#include <cstdio>
#include <cstring>

int main(){
	char str[100];
	int count = 0;
	
	while (scanf("%s", str) != EOF){
		int o = 0;
		for (int i = 0; i < strlen(str) / 2; i++){
			if (str[i] == str[strlen(str) - 1 - i]) o++;
		}
		if (o == strlen(str)/2) count++;
	}

	printf("%d\n", count);
	return 0;
}