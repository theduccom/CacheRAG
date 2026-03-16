#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main(){
  int n,m,p;
  while(true){
    cin >> n >> m;
    if(n+m == 0)break;
    vector<int> vec;
    for(int i=0;i<n;i++){
      cin >> p;
      vec.push_back(p);
    }
    sort(vec.begin(),vec.end(),greater<int>() );
    int sum = 0,cnt=1;
    for(int i=0;i<vec.size();i++){
      if(cnt%m == 0){
	cnt = 1;
	continue;
      }
      sum+=vec[i];
      cnt++;

    }
    cout << sum << endl;
  }
  return 0;
}