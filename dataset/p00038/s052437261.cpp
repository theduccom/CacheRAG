#include<cstdio>
#include<algorithm>
using namespace std;

int n[5];

int main(){
	while(scanf("%d,%d,%d,%d,%d",&n[0],&n[1],&n[2],&n[3],&n[4])!=EOF){
		sort(n,n+5);
		if((n[0]==n[1]&&n[1]==n[2]&&n[2]==n[3])||(n[1]==n[2]&&n[2]==n[3]&&n[3]==n[4])) printf("four card\n");
		else if((n[0]==n[1]&&n[1]==n[2]&&n[3]==n[4])||(n[0]==n[1]&&n[2]==n[3]&&n[3]==n[4])) printf("full house\n");
		else if((n[4]==n[3]+1&&n[3]==n[2]+1&&n[2]==n[1]+1&&n[1]==n[0]+1)||(n[0]==1&&n[1]==10&&n[2]==11&&n[3]==12&&n[4]==13)) printf("straight\n");
		else if((n[0]==n[1]&&n[1]==n[2])||(n[1]==n[2]&&n[2]==n[3])||(n[2]==n[3]&&n[3]==n[4])) printf("three card\n");
		else if((n[0]==n[1]&&n[2]==n[3])||(n[0]==n[1]&&n[3]==n[4])||(n[1]==n[2]&&n[3]==n[4])) printf("two pair\n");
		else if(n[0]==n[1]||n[1]==n[2]||n[2]==n[3]||n[3]==n[4]) printf("one pair\n");
		else printf("null\n");
	}
	return 0;
}