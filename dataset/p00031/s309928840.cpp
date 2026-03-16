#include<iostream>
using namespace std;
int main(){
  int w;
  int B[10]={1,2,4,8,16,32,64,128,256,512};
  while(cin>>w){
    int u[10],c=0;
    for(int i=9;i>-1;i--){
      if(w>=B[i]){
	w-=B[i];
	u[c]=B[i];
	c++;
      }
    }
    for(int i=c-1;i>-1;i--){
      cout<<u[i];
      if(i!=0)cout<<" ";
    }
    cout<<"\n";
  }
  return 0;
}
    