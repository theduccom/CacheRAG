#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPrime(int n){
	if(n<=1||n!=2&&(n&1)==0)return false;
	for(int i=3;i*i<=n;i+=2)
		if(n%i==0)return false;
	return true;
}
int main(){
	vector<int> primes;
	for(int i=2;i<=50000;i++)
		if(isPrime(i))primes.push_back(i);
	int n,ans;
	while(cin>>n,n){
		ans=0;
		for(int i=0;i<primes.size();i++){
			if(n/2 < primes[i])break;
			if(binary_search(primes.begin(),primes.end(),n-primes[i]))ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}