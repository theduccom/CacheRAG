#include<iostream>
#include<string>
using namespace std;

int main(){
  int i,j,k;
  string str;

  while(cin>>str){
    for(i=0;i<str.size();i++){
      if(str[i]=='@'){
	i++;
	k=i+1;
	for(j=0;j<str[i]-'0';j++){
	  cout << str[k];
	}
	i++;
      }else{
	cout << str[i];
      }
    }
    cout << endl;
  }
  return 0;
}