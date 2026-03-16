#include<iostream>
#include<cmath>
#define V(time) (9.8*time)
#define YT(height) (sqrt(height/4.9)) 
using namespace std;
int main(){
  double broken;
  while(cin>>broken){
    double hv[1000]={};
    for(int i=1;i<1000;i++)
      hv[i]=V(YT((i-1)*5));
    for(int i=1;i<1000;i++){
      if(hv[i]>=broken){
	cout<<i<<endl;
	break;
      }
    }
  }
  return 0;
}