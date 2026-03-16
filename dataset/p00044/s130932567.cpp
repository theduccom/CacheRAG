#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(void){
  int prime[50000];
  int prime_f[51001];
  int k;
  int n;
  int i,j;
  int n_size;

  while(cin>>n){
    k=0;
    memset(prime_f,0,sizeof(prime_f));
    prime_f[0]=prime_f[1]=1;
    for(i=2;i<51000;i++){
      if(!prime_f[i]){
	k++;
	prime[k]=i;
	for(j=2*i;j<51000;j+=i){
	  prime_f[j]=1;
	}
      }
    }

    for(i=0;i<k;i++){
      if(prime[i]>=n){
	if(prime[i]==n){
	  cout<<prime[i-1]<<" "<<prime[i+1]<<endl;
	}else{
	  cout<<prime[i-1]<<" "<<prime[i]<<endl;
	}
	break;
      }  
    }
  }
  return(0);
}