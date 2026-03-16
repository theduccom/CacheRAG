#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  int keep,len;
  while(cin>>str){
    len =str.size();
    int num[len];
    int ans=0;
    for(int i=0;i<len;i++){
      switch (str[i]){
      case 'I': num[i]=1;
	break;
      case 'V': num[i]=5;
	break;
      case 'X': num[i]=10;
	break;
      case 'L': num[i]=50;
	break;
      case 'C': num[i]=100;
	break;
      case 'D': num[i]=500;
	break;
      case 'M': num[i]=1000;
      }
    }
    ans=num[len-1];
    keep=num[len-1];
    for(int i=len-2;i>=0;--i){
      if(num[i] < keep){
	ans-=num[i];
      }
      else{
	ans+=num[i];
      }
      keep=num[i];
    }
    cout<<ans<<endl;
  }
}
    