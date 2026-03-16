#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  string str1,str2;
  int testnum;

  cin>>testnum;
  int t=0;
  while(t<testnum&&cin>>str1>>str2){
    string sumstr;
    reverse(str1.begin(),str1.end());
    reverse(str2.begin(),str2.end());

    unsigned size=min(str1.size(),str2.size());
    unsigned i;
    unsigned carry=0;
    for(i=0;i<size;++i){
      unsigned sum=str1[i]+str2[i]+carry-'0'*2;
      sumstr.push_back(sum%10+'0');
      carry=sum/10;
    }

    string large=(str1.size()>str2.size())?str1:str2;
    for(;i<large.size();++i){
      unsigned sum=large[i]+carry-'0';
      sumstr.push_back(sum%10+'0');
      carry=sum/10;
    }

    if(carry) sumstr.push_back(carry+'0');
    reverse(sumstr.begin(),sumstr.end());
    
    if(sumstr.size()<=80)
      cout<<sumstr<<endl;
    else
      cout<<"overflow"<<endl;
    t++;
  }
}