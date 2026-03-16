#include<iostream>
using namespace std;
#define N 1000010
int main()
{
    int a[N]={0},n,i,j,count;
    for(i=2;i<=N/2;i++){
	if(a[i]==0){
	    for(j=2;j*i<=N;j++){
		a[i*j]=1;	     
    	    }
	}
    }
    while(1){
    	cin>>n;
	if(n==0)break;
    	count=0;
	for(i=2;i<=n/2;i++){
	    if(a[i]==0&&a[n-i]==0)count++;
	}   
	cout<<count<<endl; 
    }
    return 0;	
}