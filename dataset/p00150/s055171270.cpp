#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
  bool prime[100000];
  prime[0]=prime[1]=0;
  loop(i,2,100000){
    prime[i]=true;
  }
  for(int i=2;i<=100000;i++){
    for(int j=2;i*j<=100000;j++){
      prime[i*j]=false;
    }
  }
  int n,m,ans1,ans2;
  while(cin>>n,n){
    for(int i=2;i<=n;i++){
      if(prime[i]){
	m=i;
	i++;
	while(!prime[i])i++;
	if(i>n)break;
	if((i-m)==2){
	  ans1=m;
	  ans2=i;
	}
	i--;
      }
    }
    cout<<ans1<<" "<<ans2<<endl;
  }
  return 0;
}