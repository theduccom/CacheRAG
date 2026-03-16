#include<cstring>
#include<cstdio>

using namespace std;

int main(void){
	char st1[128];
	char st2[128];
	int ans = 0;
	
	while(scanf("%s", st1) != EOF){
		int r = strlen(st1);
		
		for(int i = 0; i < r; i++){
			st2[i] = st1[r-i-1];
		}
		st2[r] = '\0';
		if(!strcmp(st1,st2))ans++;
	}
	printf("%d\n",ans);
	return 0;
}