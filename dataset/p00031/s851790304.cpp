#include <iostream>
#include <stack>
using namespace std;

int main(){
  int w[]={512,256,128,64,32,16,8,4,2,1};
  int n;
  while(cin>>n){
    stack<int> a;
    for(int i=0;i<10;i++){
      if(n>=w[i]){
	a.push(w[i]);
	n-=w[i];
      }
    }
    cout<<a.top();
    a.pop();
    while(!a.empty()){
      cout<<' '<<a.top();
      a.pop();
    }
    cout<<endl;
  }
  return 0;
}