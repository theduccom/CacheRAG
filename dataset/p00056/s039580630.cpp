#include<iostream>
using namespace std;

int main(){
  bool prime[50000];
  prime[0]=prime[1]=false;
  for(int i=2;i<50000;i++){
    prime[i]=true;
  }

  for(int i=2;i*i<50000;i++){
    if(prime[i]){
      for(int j=i*i;j<50000; j+=i){
        prime[j]=false;
      }
    }
  }

  while(true){
    int min,a,cnt;
    cin >> a;

    if(a==0)
      break;
    cnt=0;
    for(int i=2;i<=a/2;i++){
      if(prime[i]&&prime[a-i]){
        cnt++;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}

