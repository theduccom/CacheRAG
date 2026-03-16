#include <iostream>
#include <math.h>

#define N 1000000
using namespace std;

int main(){
	int n;
	int arr[N];

	for(int i=0;i<N;i++){
		arr[i]=1;
	}
	for(int i=2;i<sqrt(N);i++){
		if(arr[i]){
			for(int j=0;i*(j+2)<N;j++){
				arr[i*(j+2)]=0;
			}
		}
	}
	while(true){
		cin >> n;
		if(n==0){
			break;
		}
		int cnt=0;
		int sum=0;
		for(int i=2;i<N;i++){
			if(arr[i]!=0){
				sum+=i;
				cnt++;
				}
			if(cnt==n){
				break;
				}
		}
		cout << sum << endl;
		}
		
	return 0;
	}