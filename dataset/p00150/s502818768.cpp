#include<iostream>
#include<algorithm>

using namespace std;

bool prime(int x){
 if(x==2)return true;
 if(x==3)return true;
 if(x==5)return true;
 if(x % 2 == 0)return false;
 for(int i = 3;i < x;i+=2)
  if(x % i == 0)return false;
 return true;
}

int main(){
 int n;
 while(cin >> n, n){
  for(int i = n-2;i >= 0;i--){
  if(prime(i) && prime(i + 2)){
   cout << i << " " << i+2<< endl;
  break;
  }
 }
 }
 return 0;
}