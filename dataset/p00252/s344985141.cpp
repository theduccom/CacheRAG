#include <cstdio>
using namespace std;


int main(){
	int s[3];
	scanf("%d%d%d", &s[0], &s[1], &s[2]);
	printf("%s\n", (s[0] && s[1] && !s[2]) || (!s[0] && !s[1] && s[2]) ? "Open" : "Close");


	return 0;
}