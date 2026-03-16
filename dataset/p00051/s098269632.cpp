#include <stdio.h>
#include <algorithm>
#include <functional>

using namespace std;

int main(void)
{
	char str[9];
	int n;
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%s", str);
		
		int m;
		sort(str, str + 8);
		m = atoi(str);
		
		sort(str, str + 8, greater<char>());
		m = atoi(str) - m;
		
		printf("%d\n", m);
	}
	
	return (0);
}