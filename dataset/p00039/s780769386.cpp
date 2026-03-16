#include <iostream>
using namespace std;

int getNum(char c){
  const string R="IVXLCDM";
  const int N[]={1,5,10,50,100,500,1000};
  for(int i=0;i<R.size();++i){
    if(R[i]==c) return N[i];
  }
  return 0;
}

int main(void){
  string s;
  while(cin>>s){
    int ans=0,back=1001;
    for(int i=0,a;i<s.size();++i){
      a=getNum(s[i]);
      ans=(a>back)?ans-back*2+a:ans+a;
      back=a;
    }
    cout<<ans<<endl;
  }
}