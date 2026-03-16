#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  for(;;){
    int n,m;
    cin >> n >> m;
    if(n == 0 || m == 0) break;
    vector<int> v(n);
    for(int i=0; i<n; i++){
      cin >> v[i];
    }
    sort(v.rbegin(),v.rend());
    int sum = 0;
    for(int i=0; i<n; i++){
      if(i % m == m-1) continue;
      sum += v[i];
    }
    cout << sum << endl;
  }
  return 0;
}