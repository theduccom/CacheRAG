#include<iostream>
#include<string>
#include<cstdio>
#include<stack>
#include<algorithm>
using namespace std;
string str1;
string str2;
stack<int> sta;

int main()
{
  int n;
  int i,j;
  int exc;//??°?????????
  int sum;

  cin>>n;
  for(i=0;i<n;i++){
    cin>>str1;
    cin>>str2;
    if(str1.size()>80 || str2.size()>80){
      cout<<"overflow"<<endl;
      continue;
    }
    exc=0;
    for(j=1;j<=min(str1.size(),str2.size());j++){
      sum=str1[str1.size()-j]-'0'+str2[str2.size()-j]-'0'+exc;
      exc=sum/10;
      sta.push(sum%10);
    }
    if( str1.size() < str2.size() ){
      while(j<=str2.size()){
	sum=str2[str2.size()-j]-'0'+exc;
	exc=sum/10;
	sta.push(sum%10);
	j++;
      }
    }else if( str1.size() > str2.size() ){
      while(j<=str1.size()){
	sum=str1[str1.size()-j]-'0'+exc;
	exc=sum/10;
	sta.push(sum%10);
	j++;
      }
    }
    if(max(str1.size(),str2.size())==80 && exc==1){
      cout<<"overflow"<<endl;
      continue;
    }
    if(exc)
      cout<<exc;
    for(j=0;j<max(str1.size(),str2.size());j++){  
      cout<<sta.top();
      sta.pop();
    }
    cout<<endl;
  }
}