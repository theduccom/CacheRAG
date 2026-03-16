#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

int main(){
  int i, n, m, x, sum, count;
  vector<int> data;

  while(1){
    cin >> n >> m;
    if(n == 0 && m == 0) break;

    for(i=0; i<n; ++i){
      cin >> x;
      data.push_back(x);
    }
    sort(data.begin(), data.end(), greater<int>());

    for(i=0, sum=0, count=1; i<data.size(); ++i, ++count){
      if(count == m) count = 0;
      else sum += data[i];
    }

    cout << sum << endl;
    data.clear();
  }
  return 0;
}