#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

pair<int,int> solve(int n){
  vector<pair<int,int>> list;
  for(int i=0;i<n;i++){
    int p,d1,d2;
    cin>>p>>d1>>d2;
    list.push_back(make_pair(d1+d2,p));
  }
  sort(list.begin(),list.end());
  return list[list.size()-1];
}

int main(){
  int n;
  while(cin>>n,n!=0){
    auto ans = solve(n);
    cout<<ans.second<<" "<<ans.first<<endl;
  }
}