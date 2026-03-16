#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main (){

	int arr[1000000];
	int N=1000000;

		for(int i = 0; i < N; i++){
			arr[i] = 1;
		}
		for(int i = 2; i < sqrt(N); i++){
			if(arr[i]){
				for(int j = 0; i * (j + 2) < N; j++){
					arr[i *(j + 2)] = 0;
				}
			}
		}
	
	while(1){
		int n,a=0;
		cin >> n;
		if(n==0)
			break;

		
		for(int i = 2,j=0; j < n; i++){
			if(arr[i]){
				a+=i;
				j++;
			}
		}

		cout << a << endl;
	}
}