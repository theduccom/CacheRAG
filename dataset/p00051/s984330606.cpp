#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int n;
	
	scanf("%d", &n);
	
	while(n-- > 0){
		
		char num[10];
		
		scanf("%s", num);
		
		sort(num, num+8);
		
		int min;
		min = atoi(num);
		
		int max;
		reverse(num, num+8);
		max = atoi(num);
		
		printf("%d\n", max - min);
	}
}