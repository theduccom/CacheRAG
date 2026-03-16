#include <iostream>
#include <string>
using namespace std;

string calc(string s1,string s2){
  int num1=s1.size()-1,num2=s2.size()-1;
  int tmp=0;
  string s;
  while(!(num1==-1&&num2==-1&&tmp==0)){
    if(num1!=-1&&num2!=-1){
      tmp+=int(s1[num1]-'0')+int(s2[num2]-'0');
      num1--;num2--;
    }else if(num1!=-1&&num2==-1){
      tmp+=int(s1[num1]-'0');
      num1--;
    }else if(num1==-1&&num2!=-1){
      tmp+=int(s2[num2]-'0');
      num2--;
    }
    s=to_string(tmp%10)+s;
    tmp/=10;
  }
  if(s.size()>80)s="overflow";
  return s;
}

int main(){
  cin.tie(0);ios::sync_with_stdio(false);
  int n;
  string s1,s2;

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>s1>>s2;
    cout<<calc(s1,s2)<<endl;
  }
  return 0;
}