#include<iostream>
#include<vector>
using namespace std;


int c;
vector<int> v;
vector<int> w;
void init(){
  c= 0;
  v.clear();
  w.clear();
}


bool input(){
  cin>>c;
  if(c==0)return false;
  int a;
  cin>>a;
  v.resize(a);
  w.resize(a);
  for(int i=0;i<a;i++){
    char tmp;
    cin>>v[i]>>tmp>>w[i];
  }
  return true;
}


vector<int> solve(){
  vector<int> ans(2);
  ans[0] = 1;
  ans[1] = 2;
  vector<vector<int>> dp(1100,vector<int>(1100,0));
  for(int i=0;i<c+10;i++){
    if(w[0]<=i){
      dp[0][i] = v[0];
    }
  }
  for(int i=1;i<v.size();i++){
    for(int j=0;j<c+10;j++){
      dp[i][j] = dp[i-1][j];
      if(w[i]<=j) dp[i][j] = max(dp[i][j],dp[i-1][j-w[i]]+v[i]);
    }
  }
  ans[0] = dp[v.size()-1][c];
  for(int i=c;i>0;i--){
    if(dp[v.size()-1][i]==dp[v.size()-1][i-1])continue;
    else{
      ans[1] = i;
      return ans;
    }
  }
  ans[1] = 0;
  return ans;
}

int main(){
  int case_n = 0;
  while(init(),input()){
    case_n++;
    auto ans = solve();
    cout<<"Case "<<case_n<<":"<<endl;
    cout<<ans[0]<<endl;
    cout<<ans[1]<<endl;
  }
}