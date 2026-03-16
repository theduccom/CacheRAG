#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPrime(int n){
	if(n<=1 || (n&1)==0&&n!=2)return false;
	for(int i=3;i*i<=n;i+=2)
		if(n%i==0)return false;
	return true;
}
int main(){
	vector<int> prime;
	for(int i=2;;i++){
		if(isPrime(i)){
			prime.push_back(i);
			if(50000<i)break;
		}
	}
	int n,index;
	while(cin>>n){
		index = lower_bound(prime.begin(),prime.end(),n)-prime.begin();
		if(n==prime[index])cout<<prime[index-1]<<' '<<prime[index+1]<<endl;
		else cout<<prime[index-1]<<' '<<prime[index]<<endl;
	}
	return 0;
}