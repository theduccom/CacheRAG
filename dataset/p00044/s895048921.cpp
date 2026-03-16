#include<iostream>
using namespace std;
#define N 60000
int main()
{
    int a[N]={0},n,i,j,z;
    for(i=2;i<=N/2;i++){
	if(a[i]==0){
	    for(j=2;j*i<=N;j++){
		a[i*j]=1;	     
    	    }
	}
    }
    while((cin>>n)!=0){
    	for(i=n-1;i>1;i--){
	    if(a[i]==0){
		cout<<i<<' ';
		break;		
	    }
	}
	
    	for(i=n+1;i<=N;i++){
	    if(a[i]==0){
		cout<<i<<endl;
		break;		
	    }
	}
    }
    return 0;	
}