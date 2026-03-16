#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<deque>

using namespace std;

void MakePrimeArray(deque<bool>& A,int n){
	
	A[0] = A[1] = false;
	for(int i=2;i<n;i++){
		A[i] = true;
	}
	
	for(int	i=2;i*i<n;i++){
	if(A[i]){
			for(int j=i*i;j<n;j+=i){
				A[j] = false;
			}
		}
	}
	
}

inline int GoldBach(const deque<int>& prime,int n){
	
	int count=0;
	deque<int> clear;
	bool ok=true;
	
	for(int i=0;prime[i]<n;i++){

		if(std::binary_search(clear.begin(), clear.end(), prime[i])){
			break;
		}
		
		int num=n-prime[i];
		
	
		if(std::binary_search(prime.begin(), prime.end(), num)){
			count++;	
			clear.insert(clear.begin(),num);
		}
		
	}
	return count;
}

int main(){
	
	int n=50001;

	deque<bool> primearray;
	
	primearray.resize(n);
	
	MakePrimeArray(primearray,n);
	
	deque<int> prime;
	
	for(int i=2;i<n;i++){
		if(primearray[i]){
			prime.push_back(i);
		}
	}
	
	
	while(true){
		int innum;
		cin >> innum;
		//scanf("%d",&innum);
		
		if(innum==0) break;
		int answer = GoldBach(prime,innum) ;
		//printf("%d \n",answer);
		cout << answer << endl;
	}
	
	return 0;
}