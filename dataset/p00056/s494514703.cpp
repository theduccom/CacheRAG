#include<stdio.h>

int isPrime[50000];
int a[100000];
void func(){
	for(int i = 0; i < 50000; i++)isPrime[i] = 1;
	isPrime[0] = 0;
	isPrime[1] = 0;
	
	for(int i = 4; i < 50000; i++){
		for(int j = 2; j*j <= i; j++){
			if(i % j == 0){
				isPrime[i] = 0;
				break;
			}
		}
	}
	
	for(int i = 0; i < 50000; i++){
		for(int j = i; j < 50000; j++){
			if(isPrime[i]&&isPrime[j])a[i+j]++;
		}
	}
}


int x;
int main(void){
	
	int n;
	func();
	while(scanf("%d", &n),n){
		printf("%d\n", a[n]);
	}
}