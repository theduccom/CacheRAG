//Differential
#include<bits/stdc++.h>
using namespace std;

int main(){
  double pre, now, max=0.0;
  cin>>pre;
  while(cin>>now){
    if(max<abs(pre-now))max=abs(pre-now);
  }
  cout<<max<<endl;
  return 0;
}