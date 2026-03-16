#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#define ALL(v) v.begin(),v.end()
string calc(string a,string b){
  reverse(ALL(a));
  reverse(ALL(b));
  while(a.size() < b.size())a += '0';
  while(b.size() < a.size())b += '0';
  int c=0;
  string res;
  for(int i=0;i<a.size();i++){
    c = c+a[i]-'0'+b[i]-'0';
    res += c%10+'0';
    c /= 10;
  }
  if(c)res += c+'0';
  if(res.size() > 80)return "overflow";
  reverse(ALL(res));
  return res;
}
int main(){
  int n;
  string a,b;
  cin>>n;
  while(n--){
    cin>>a>>b;
    cout<<calc(a,b)<<endl;
  }
  return 0;
}