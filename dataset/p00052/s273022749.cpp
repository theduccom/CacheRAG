#include<iostream>
using namespace std;
int main(){
  int n,np,count=0,ans=0;
  while(cin>>n){
    if(n==0) break;
    n -= n%5;
    while(n!=0){
      np = n;
      while(np%5==0){
	count++;
	np /= 5;
      }
      ans += count;
      n -= 5;
      count = 0;
    } 
      cout << ans << endl;
      ans = 0; 
    }
  }