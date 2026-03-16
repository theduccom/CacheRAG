#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> P;
typedef vector<int> VI;
typedef vector<VI> VVI;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = numeric_limits<int>::max() / 2;
const int NEG_INF = numeric_limits<int>::min() / 2;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int g[10]={1,2,4,8,16,32,64,128,256,512};
  int n;
  while(cin>>n){
      std::vector<int> v;
      for(int i=9;i>=0;i--){
          if(n>=g[i]){
              v.push_back(g[i]);
              n-=g[i];
          }
      }
      sort(v.begin(),v.end());
      for(int i=0;i<(int)v.size();i++){
          if(i!=(int)v.size()-1) cout<<v[i]<<" ";
          else cout<<v[i]<<endl;
      }
  }
}