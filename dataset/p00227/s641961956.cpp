//AOJ0227
#define _CRT_SECURE_NO_WARNINGS
#include<algorithm>
#include<cstdio>
#include<iostream>
int vegetable[1001];

int main(){
	int n, m;
	while (scanf("%d %d", &n, &m), n, m){
		for (int i = 0; i < n; ++i){
			scanf("%d",vegetable+i);
		}
		std::sort(vegetable, vegetable + n);
		int cnt = 0;
		int ans = 0;
		//??????
		//for (int i = 0; i < n; ++i)printf("%d ", vegetable[i]);
		for (int i = n - 1; i >= 0; i--){
			ans += vegetable[i];
			cnt++;
			if (cnt%m == 0)ans -= vegetable[i];
		}
		printf("%d\n", ans);
	}
}