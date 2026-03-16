#include<iostream>
#include<cstring>
using namespace std;

int main(){
  int num,a[4]={};
  char c;
  string s,b[4]={"A","B","AB","O"};

  while(cin>>num>>c>>s){
    for(int i=0;i<4;i++)
      if(s==b[i]) 
	a[i]++;
  }
  for(int i=0;i<4;i++)
    cout<<a[i]<<endl;
 return 0;
}