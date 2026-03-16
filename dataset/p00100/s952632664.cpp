#include<algorithm>
#include<iostream>
#include<cstdio>

using namespace std;

int main(void){
	int n;
	while(scanf("%d", &n),n){
		long long per[5000]={0};
		int flg[5000]={0};
		int count = 0;
		int cnt[5000]={0};
		int num,t,s;
		int flag = 1;
		
		for(int i = 0; i < n; i++){
			scanf("%d%d%d", &num, &t, &s);
			if(flg[num]==0){
				cnt[count] = num;
				count++;
				flg[num]=1;
			}
			per[num] += (long long)t * (long long)s;
		}
		for(int i = 0; i < count; i++){
			if(per[cnt[i]] >= (long long)1000000){
				flag=0;
				printf("%d\n", cnt[i]);
			}
		}
		if(flag)
			puts("NA");
	}
	return 0;
}