#include<cstdio>
#include<cmath>

int main(void){
	int n;
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int keta;
		int nums[10] = {0,};
		int iMax = 0, iMin = 0;
		char buf[16];

		scanf("%s", buf);

		for(int i = 0; i < 8; i++){
			nums[ buf[i] - '0' ]++;
		}

		keta = 7;
		for(int i = 0; i < 10; i++){
			for(int j = 0; j < nums[i]; j++){
				iMin += i * (int)pow(10.0, keta);
				keta--;
			}
		}
		keta = 7;
		for(int i = 9; i >= 0; i--){
			for(int j = 0; j < nums[i]; j++){
				iMax += i * (int)pow(10.0, keta);
				keta--;
			}
		}
		printf("%d\n", iMax - iMin);
	}
	return 0;
}