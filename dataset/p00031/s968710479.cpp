#include <iostream>
#include <queue>
using namespace std;

int main(){
  int w,we[10]={1,2,4,8,16,32,64,128,256,512},i;
  queue<int> k;
  while(cin>>w){
    while(w!=0){
      k.push(w%2);
      w=w/2;
    }
    i=0;
    while(k.size()){
      if(k.front()==1&&k.size()>=2)cout<<we[i]<<" ";
      else if(k.front()==1)cout<<we[i]<<endl;
      k.pop();
      i++;
    }
  }
  return 0;
}