#include<iostream>
using namespace std;
int main(){
  int weight;
  int hundou[10]={1,2,4,8,16,32,64,128,256,512};
  while(cin>>weight){
    int point[10]={};
    for(int i=9;i>=0;i--){
      if(weight>=hundou[i]){
	weight-=hundou[i];
	point[i]=1;
      }
    }

    int maxpointer=0;
    for(int i=0;i<10;i++){
      if(point[i])
	maxpointer=i;
    }

    for(int i=0;i<=maxpointer;i++){
      if(point[i]){
	cout<<hundou[i];
	if(i!=maxpointer)
	  cout<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}