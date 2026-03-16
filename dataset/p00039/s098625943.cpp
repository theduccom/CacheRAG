#include<iostream>
#include<map>
#include<string>
using namespace std;
typedef pair<int,int> P;
int main(){
  map<char,int> tmp;
  tmp['I']=1,tmp['V']=5,tmp['X']=10,tmp['L']=50,tmp['C']=100,tmp['D']=500,tmp['M']=1000;
  string str;
  while(cin >> str){
    int ans = 0,i=0;
    while(1){
      if(i == str.size() - 1) {
	ans += tmp[str[str.size()-1]];
	break;
      }
      if(tmp[str[i]] < tmp[str[i+1]]) ans -= tmp[str[i]];
      else ans += tmp[str[i]];
      i++;
    }
    cout << ans << endl;
  }
}