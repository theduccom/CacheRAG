#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

int main(void){
  string s;
  while(getline(cin,s)){
    string res;
    for(int i = 0 ; i < s.size() ; i ++){
      if(s[i] == '@'){
	i++;
	for(int j = 0 ; j <int(s[i] - '1') ; j ++){
	 res += s[i + 1];
	} 
      }else{
	res += s[i];
      }
    }
    cout<<res<<endl;
  }
}