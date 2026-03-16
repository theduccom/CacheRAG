#include <iostream>
using namespace std;
int main(){
  int w[10]={1,2,4,8,16,32,64,128,256,512};
  int n;
  while(cin>>n){
    for(int i=0;n>0;i++){
      if (n%2){
	cout<<w[i];
	n/=2;
      if(n)cout<<" ";
      }
      else
	n/=2;
    }
    cout<<endl;
  }
  return 0;
}