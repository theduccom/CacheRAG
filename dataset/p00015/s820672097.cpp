#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){

  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    string a,b,s;
    int how=0;
    cin>>a>>b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    for(int j=0;j<a.size()||j<b.size();j++){
      if(j<a.size()) how+=a[j]-'0';
      if(j<b.size()) how+=b[j]-'0';
      s.push_back(how%10+'0');
      how/=10;
    }
    if(how!=0) s.push_back(how+'0');
    reverse(s.begin(),s.end());
    if(s.size()>80) cout<<"overflow"<<endl;
    else cout<<s<<endl;
  }
  return 0;

}