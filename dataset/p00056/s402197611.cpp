#include <iostream>
using namespace std;

int prime[50001];
bool is_prime[50001];

int res(int n)
{
	int p=0;
	for(int i=0;i<n+1;i++){
		is_prime[i] = true;
	}
	is_prime[0] = is_prime[1] = false;
	for(int i=2;i<n+1;i++){
		if(is_prime[i]){
			prime[p++] = i;
			for(int j=2*i;j<n+1;j+=i){
				is_prime[j] = false;
			}
		}
	}
	return p;
}
int binsearch(int key,int left,int right)
{
	while(left<=right){
		int middle = (left+right)/2;
		if(key == prime[middle])
			return 1;
		else if(key<prime[middle])
			right = middle-1;
		else
			left = middle+1;
	}
	return 0;
}
int main()
{
	int n;
	int count;
	int p = res(50000);
	while(cin >> n){
		if(n==0)
			break;
		count = 0;
		for(int i=0;i<p;i++){
			if(prime[i] < n/2+1)
				count+=binsearch(n-prime[i],i,p);
			else
				break;
		}
		cout << count << endl;
	}
	return 0;
}