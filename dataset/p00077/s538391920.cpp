#include<iostream>
using namespace std;
string str;
int cnt;
int main(){
  while(cin>>str){
    for(int i=0;i<(int)str.size();i++){
      if(str[i]=='@'){
	cnt=str[i+1]-'0';
      }else if(i-1>=0&&str[i-1]=='@'){
	continue;
      }else{
	if(i-2>=0&&str[i-2]=='@'){
	  for(int j=0;j<cnt;j++)cout<<str[i];
	}else{
	  cout<<str[i];
	}
      }
    }
    cout<<endl;
  }
  return 0;
}