#include<iostream>
using namespace std;
bool isPrime(int n){
	if(n<=1 || n!=2&&(n&1)==0)return false;
	for(int i=3;i*i<=n;i+=2)
		if(n%i==0)return false;
	return true;
}
int main(){
	int a[10001];
	int n,m=1;
	a[0]=0;a[1]=2;
	for(int i=3;m<10000;i+=2){
		if(isPrime(i)){
			a[m+1]=i+a[m];
			m++;
		}
	}
	while(cin>>n&&n)cout<<a[n]<<endl;
	return 0;
}