//Aizu PR
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s;

  scanf("%d\n", &n);
  while(n--){
    getline(cin, s);
    vector<string> ans;
    stringstream ss(s);
    string t;
    while(getline(ss, t, ' ')){
      int i=0;
      while((i=t.find("Hoshino", i))!=string::npos){
        t.replace(i, 7, "Hoshina");
      }
      ans.push_back(t);
    }
    for(int i=0; i<ans.size(); i++){
      if(i!=ans.size()-1)cout<<ans[i]<<' ';
      else cout<<ans[i]<<endl;
    }
  }
  return 0;
}