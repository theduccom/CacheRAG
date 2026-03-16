#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  string str;
  
  cin >> n;
  
  for(int i=0;i<=n;i++){
    getline(cin,str);
    
    while(str.find("Hoshino") != string::npos){
      str.replace(str.find("Hoshino"),7,"Hoshina");
    }
    
    if(i!=0) cout << str << endl;
    
  }
  
  return (0);
}