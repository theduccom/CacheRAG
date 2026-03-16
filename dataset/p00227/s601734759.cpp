#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  vector<int> p;
  
  while(true){
    int ans = 0;
    cin >> n >> m;

    if(n + m == 0) break;

    p.resize(n);

    for(int i=0; i<n;++i){
      cin >> p[i];
    }
    
    sort(p.begin(), p.end());

    reverse(p.begin(), p.end());

    for(int i = m - 1; i < n; i += m){
      p[i] = 0;
    }

     for(int i = 0; i < n; ++i){
       ans += p[i];
    }
     
     cout<<ans<<endl;
  }
  return 0;
}

