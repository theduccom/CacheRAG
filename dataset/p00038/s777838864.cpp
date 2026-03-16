#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int c[6] = {0};
	while(scanf("%d,%d,%d,%d,%d",&c[0],&c[1],&c[2],&c[3],&c[4]) != EOF){
		sort(c,c+5);
		if((c[0] == c[1] && c[1] == c[2] && c[2] == c[3]) || (c[1] == c[2] && c[2] == c[3] && c[3] == c[4]))puts("four card");
		else if((c[0] == c[1] && c[2] == c[3] && c[3] == c[4])||(c[0] == c[1] && c[1] == c[2] && c[3] == c[4]))puts("full house");
		else if((c[1] == c[0]+1 && c[2] == c[1]+1 && c[3] == c[2]+1 && c[4] == c[3]+1) || (c[0] == 1 && c[1] == 10 && c[2] == 11 && c[3] == 12 && c[4] == 13))puts("straight");
		else if((c[0] == c[1] && c[1] == c[2]) || (c[1] == c[2] && c[2] == c[3]) || (c[2] == c[3] && c[3] == c[4]))puts("three card");
		else if((c[0] == c[1] && (c[2] == c[3])||(c[3] == c[4])) || (c[1] == c[2] && c[3] == c[4]))puts("two pair");
		else if((c[0] == c[1]) || (c[1] == c[2]) || (c[2] == c[3]) || (c[3] == c[4]))puts("one pair");
		else puts("null");
	}
	return 0;
}