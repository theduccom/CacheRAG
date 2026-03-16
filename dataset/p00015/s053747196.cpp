#include <iostream>
#include <algorithm>
#include <cstdio>
#include <stack>
using namespace std;

int main(){
  stack<int> n1,n2;
  int n,nn1,nn2,up,k,f,num[1000];
  char c;
  cin>>n;
  scanf("%c",&c);
  for(int i=0;i<n;i++){
    while(1){
      scanf("%c",&c);
      if(c=='\n')break;
      n1.push(c-'0');
    }
    while(1){
      scanf("%c",&c);
      if(c=='\n')break;
      n2.push(c-'0');
    }
    up=0;
    k=0;
    f=0;
    while(1){
      if(n1.size()!=0){
	nn1=n1.top();n1.pop();
      }else nn1=0;
      if(n2.size()!=0){
	nn2=n2.top();n2.pop();
      }else nn2=0;
      num[k]=(nn1+nn2+up)%10;
      up=(nn1+nn2+up)/10;
      if(n1.size()==0&&n2.size()==0&&up==0){
	break;
      }
      k++;
      if(k>=80)f=1;
    }
    if(f==1)cout<<"overflow";
    else {
      for(int i=k;i>=0;i--)cout<<num[i];
    }
    cout<<endl;
  }
  return 0;
}