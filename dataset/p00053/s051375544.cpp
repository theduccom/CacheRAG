#include<iostream>
using namespace std;
#define N 105000
int main()
{
    int a[N]={0},n,i,j,z,sum;
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
	else {
    	    z=0;
	    sum=0;
	    for(i=2;i<N;i++){
	    	if(n==z)break;
		if(a[i]==0){
		    sum=sum+i;
		    z++;
		}
	    }
	}
	cout<<sum<<endl;
    }
    return 0;	
}