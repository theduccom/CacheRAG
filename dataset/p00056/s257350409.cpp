#include<iostream>
#include<string>
using namespace std;
bool isprime[50000];
int main(){
 for(int i=0;i<50000;i++){
  isprime[i]=true;   
 }
 for(int i=2;i*i<50000;i++){
  for(int j=2;j<50000;j++){
      if(j%i==0&&i!=j){
       isprime[j]=false;   
      }
  }
 }
 int n;
 while(true){
 cin>>n;
 if(n==0)
 break;
 int count=0;
 for(int i=2;i<=n/2;i++){
  if(isprime[i]==true&&isprime[n-i]==true)
  count++;
 }
 cout<<count<<endl;
 }
 return 0;   
}