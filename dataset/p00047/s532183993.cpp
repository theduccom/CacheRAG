#include<cstdio>

using namespace std;

int main(void){
	
	char str[5];
	int ans[3] = {1,0,0};
	
	while(scanf("%s", str) != EOF){
		int temp = ans[str[0]-'A'];
		ans[str[0]-'A'] = ans[str[2]-'A'];
		ans[str[2]-'A'] = temp;
	}
	
	for(int i = 0; i < 3; i++){
		if(ans[i] == 1)printf("%c\n",i+'A');
	}
	return 0;
}