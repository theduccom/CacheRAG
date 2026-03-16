#include<cstdio>
int main(void){
	int ww;
	int n;
	int a[1001][1001];
	int w[1001];
	int p[1001];
	int max;
	int mm;
	for (int tt=1;;tt++){
		scanf("%d", &ww);
		if (ww == 0)break;
		scanf("%d", &n);
		for (int i = 0; i<1001; i++){
for(int j=0;j<1001;j++){
a[i][j]=0;
}
}
		for (int i = 1; i <= n; i++){
			scanf("%d,%d", &p[i], &w[i]);
for(int j=0;j<w[i];j++){
a[i][j]=a[i-1][j];
}
			for (int j = w[i]; j <= ww; j++){
				if (a[i - 1][j] > a[i - 1][j - w[i]] + p[i]){
					a[i][j] = a[i - 1][j];
				}
				else{
					a[i][j] = a[i - 1][j - w[i]] + p[i];
				}
			}
		}
		max = 0;
		mm = 0;
		for (int i = 0; i <= ww; i++){
			if (max < a[n][i]){
				max = a[n][i];
				mm = i;
			}
		}
		printf("Case %d:\n%d\n%d\n", tt, max, mm);
	}
}