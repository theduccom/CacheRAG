//Matrix-like Computation
#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > v;

int main(){
  int n;
  while(true){
    cin>>n;
    if(n==0)break;
    v.clear();
    for(int i=0; i<n; i++){
      vector<int> tmp;
      for(int j=0; j<n; j++){
        int c;
        cin>>c;
        tmp.push_back(c);
      }
      v.push_back(tmp);
    }
    //行方向
    for(int i=0; i<n; i++){
      int sum=0;
      for(int j=0; j<n; j++)sum+=v[i][j];
      v[i].push_back(sum);
    }
    //列方向
    vector<int> tmp;
    for(int j=0; j<n; j++){
      int sum=0;
      for(int i=0; i<n; i++)sum+=v[i][j];
      tmp.push_back(sum);
    }
    int sum=0;
    for(int i=0; i<n; i++)sum+=tmp[i];
    tmp.push_back(sum);
    v.push_back(tmp);
    for(int i=0; i<=n; i++){
      for(int j=0; j<=n; j++){
        printf("%5d", v[i][j]);
      }
      cout<<endl;
    }
  }
  return 0;
}