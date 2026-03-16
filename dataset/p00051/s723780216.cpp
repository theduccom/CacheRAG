#include<cstdio>
#include<algorithm>

using namespace std;

int main(void){
	
	int n;
	
	while(scanf("%d", &n) != EOF){
		for(int i = 0; i < n; i++){
			
			char temp[128];
			char str[128];
			int Mx,Mi;
			
			scanf("%s", &temp);
			
			sort(temp,temp+8);
			for(int i = 8; i >= 0; i--){
				str[i] = temp[i];
			}
			
			reverse(temp,temp+8);
			
			Mx = atoi(temp);
			Mi = atoi(str);
			
			printf("%d\n",Mx-Mi);
		}
	}
	return 0;
}