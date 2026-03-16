#include <cstdio>

bool pri_sub[100000] = {false};
int arr[50000];
int num;

int main(){
	//gen prime number
	pri_sub[0] = pri_sub[1] = true;
	for(int i = 2;i <= 50000;i++){
		if(pri_sub[i] == false){
			for(int j = i*2; j <= 50000; j+=i){
				pri_sub[j] = true;
			}
		}
	}
	num = 0;
	for(int i = 2; i <= 50000;i++){
		if(pri_sub[i] == false){
			arr[num] = i;
			num++;
		}
	}

	//proc
	int n;
	while(scanf("%d",&n), n!=0){
		int hd = 0;
		int tl = num -1;
		int cnt = 0;
		while(hd <= tl){
			if(arr[hd] + arr[tl] == n){
				cnt++;
				hd++;
			}
			else if(arr[hd] + arr[tl] < n){
				hd++;
			}
			else{ // > n
				tl--;
			}
		}
		printf("%d\n",cnt);
	}

	return 0;
}

