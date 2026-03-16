#include <stdio.h>

int a[100000];

int main(void)
{
	int n;
	int ans;
	for(int i = 0; i < 100000; i++){
		a[i] = 1;
	}
	for(int i = 2; i < 100000; i++){
		if(a[i]){
			for(int j = i * 2;j < 100000; j = j + i){
					a[j] = 0;
			}
		}
	}
	scanf("%d",&n);
	while(n != 0){
		ans = 0;

		for(int i = 2; i <= n / 2; i++){
			if(a[i] == 1 && a[n - i] == 1){
				ans++;
			}
		}
		printf("%d\n",ans);
		scanf("%d",&n);
	}
	return 0;
}