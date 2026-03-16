#include<iostream>
#include<cmath>
using namespace std;
bool prime(int x){
  for(int i=2;i<=sqrt((double)x);i++){
    if(x%i==0)return false;
  }
  return true;
}

int main(){
  int n;
  while(cin>>n,n){
    int sum=0;
    for(int i=2;n>=1;i++){
      if(prime(i)){sum+=i;n--;}
    }
    cout<<sum<<endl;
  }
}
    