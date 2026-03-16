#include<iostream>
#include<string>
using namespace std;
int main(){
  string a;
  int t=0;
  bool flg;
  while(cin>>a){
    //if(a=="00")break;
    flg=true;
    for(int i=0;i<(a.size()+1)/2;i++){
      if(a[i]!=a[a.size()-i-1])flg=false;
    }
    if(flg)t++;
  }
  cout<<t<<endl;
}