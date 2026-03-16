#include<iostream>
using namespace std;
int main(){
  int n;
  cin >>n;
  while(n--){
    double a[3],b[3];
    cin >>a[0]>>a[1]>>a[2]>>b[0]>>b[1]>>b[2];
    double dis = (a[0]-b[0])*(a[0]-b[0])+(a[1]-b[1])*(a[1]-b[1]);
    if((a[2]+b[2])*(a[2]+b[2]) < dis){cout <<"0"<<endl;}
    else{
      if((a[2]-b[2])*(a[2]-b[2]) > dis){
	if(a[2]>b[2]){cout <<"2"<<endl;}
	else{cout <<"-2"<<endl;}
      }
      else{cout <<"1"<<endl;}
    }
  }
  return 0;
}