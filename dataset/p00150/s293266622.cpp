#include <iostream>
#include <cmath>
#define MAX 1000000
#define N 10100
using namespace std;

void eratos(int, bool*);

int main(){
  bool prime[MAX+1];
  int size;
  eratos(N,prime);
  int count=0;
  int data[1250];
  for(int i=0, j=0;i<N;i++){
    if(prime[i]){
      data[j]=i;
      j++;
    }
  }

  while(1){
    int n;
    cin >> n;
    if(n==0) break;
    int ans1, ans2;
    for(int i=1;i<1250;i++){
      if(data[i]>n) break;
      if((data[i]-data[i-1])==2){
	ans1=data[i-1];
	ans2=data[i];
      }
    }
    cout << ans1 << ' ' << ans2 << endl;
  }
  return 0;
}

void eratos(int n, bool prime[]){
  for(int i=0;i<=n;i++) prime[i]=false;
  for(int i=3;i<=n;i+=2) prime[i]=true;
  prime[2]=true;
  int limit=(int)sqrt((double)n)+1;
  for(int i=3;i<=limit;i+=2){
    if(!prime[i]) continue;
    for(int j=i+i;j<=n;j+=i)
      prime[j]=false;
  }
}