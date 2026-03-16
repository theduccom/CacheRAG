
#include<bits/stdc++.h>

using namespace std;

int main(){
  bool hoge = false;
  while(1)
    {
  int a,b;
  cin>>a>>b;
    if(a==0)break;
    if(hoge)puts("");
    hoge = true;
  vector<int> ans;

  for(int i=min(a,b);i<=max(a,b);i++){
    if(i%400 == 0 || (i%100!=0 && i%4==0)){
      ans.push_back(i);
    }
  }


  if(ans.size()!=0)
    {
      for(auto i:ans){
	cout<<i<<endl;
      }
    }
  else{
    puts("NA");
  }
    }
}