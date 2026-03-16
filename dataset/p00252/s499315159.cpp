#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
  int a,b,c;
  cin >> a >> b >> c;
  if(c==1){
    cout << "Open" <<endl;
  }else if(a==1&&b==1&&c==0){
    cout << "Open" <<endl;
  }else{
    cout << "Close" <<endl;
  }
  return(0);
}

