#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int t[3];
double limit,r;
int n;
int main(){
  while(cin>>t[0]>>t[1]>>t[2]){
    if(t[0]==0)break;
    sort(t,t+3);
    limit=sqrt(t[0]*t[0]+t[1]*t[1]);
    cin>>n;
    while(n--){
      cin>>r;
      if(r*2>limit){
	cout<<"OK"<<endl;
      }else{
	cout<<"NA"<<endl;
      }
    }
  }
  return 0;
}