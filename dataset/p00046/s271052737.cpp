#include <bits/stdc++.h>
using namespace std;

int main(){
  double n;
  vector<double> vec;
  while (cin >> n){
    vec.push_back(n);
  }
  sort(vec.begin(), vec.end());
  double ans = vec.back() - vec.front();
  cout << fixed << setprecision(3) << ans << endl;
}

