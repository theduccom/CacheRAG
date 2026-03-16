#include <iostream>
using namespace std;

int search(const int array[], int high, int key)
{
	int low = 0;
	int mid;
	int n=-1;
	while(low<=high){
		mid = (low + high)/2;
		if( array[mid] == key ){
			n = mid;
			break;
		}else if ( array[mid] < key){
			low = mid + 1;
		}else{
			high = mid -1;
		}
	}
	return(n);
}

int main(void){
	int prime[5136];
	prime[1] = 2;
	prime[2] = 3;
	int ptr=3;
	for(int num=5; num<=50000; num++){
		bool f = false;
		for(int i=1; i<ptr; i++){
			if(prime[i]*prime[i] > num){
				break;
			}
			if(num%prime[i]==0) {
				f = true;
				break;
			}
		}
		if(!f) {
			prime[ptr++] = num;
		}
	}
	prime[ptr] = 50001;
	int n;
	while(cin >> n){
		if(!n) break;
		int count = 0;
		if(n%2==0){
			for(int i=1; prime[i] <= n/2; i++){
					if(search(prime,ptr,n-prime[i])!=-1) count++;
			}
		}else{
			if(search(prime,ptr,n-2)!=-1) count++;
		}
		cout << count << endl;
	}
	return 0;
}