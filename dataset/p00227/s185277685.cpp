#include <stdio.h>
#include <algorithm>

int main(void)
{
	int n;
	int m;
	int data[1000];
	int ans;
	
	while (1){
		scanf("%d%d", &n, &m);
		if (n == 0){
			break;
		}
		
		for (int i = 0; i < n; i++){
			scanf("%d", &data[i]);
		}
		
		std::sort(data, data + n);
		std::reverse(data, data + n);
		
		ans = 0;
		for (int i = 0; i < n; i++){
			if (i % m != m - 1){
				ans += data[i];
			}
		}
		
		printf("%d\n", ans);
	}
	
	return (0);
}