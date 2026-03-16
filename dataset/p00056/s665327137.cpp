#include<iostream>
using namespace std;

int main()
{
 bool prime[1000000];

 prime[0]=prime[1]=false;
 for(int i=2;i<1000000;i++){
	prime[i]=true;
 }
 for(int i=2;i*i<1000000;i++){
	if(prime[i]){
		for(int j=i*i;j<1000000;j+=i){
			prime[j]=false;
		}
	}
 }

//???????????§?´???°??¨
 int n,x,pea;
 
 
 while(1){
	pea=0;
	cin>>n;
  if(n==0)break;
	for(int i=0;i<n/2+1;i++){
		if(prime[i]){
			x=n-i;
			if(prime[x]){
				pea++;
			}
		}
 	 }
 //	cout<<"??????????????????"<<pea<<"???????????????"<<endl;
	cout<<pea<<endl;
 }

 return 0;
}
	