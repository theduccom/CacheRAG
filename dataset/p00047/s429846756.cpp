#include <cstdio>
using namespace std;

int main(void)
{
	char a,b;
	char boll = 'A';
	
	while(scanf("%c,%c", &a, &b) != EOF){
		if(a == boll) boll = b;
		else if(b == boll) boll = a;
	}
	
	printf("%c\n", boll);
}