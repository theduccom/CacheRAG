#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

vector<int> l;
int n,m;

bool input(){
  cin>>n>>m;
  if(n==m&&n==0)return false;
  l.clear(),l.resize(n);
  for(int i=0;i<n;i++){
    cin>>l[i];
  }
  return true;
}

int solve(){
  sort(l.rbegin(),l.rend());
  int ans = 0;
  for(int i=0;i<n;i++){
    if( (i+1) %m == 0){
      continue;
    }
    ans += l[i];
  }
  return ans;
}

int main(){
  while(input()){
    cout<<solve()<<endl;
  }
}