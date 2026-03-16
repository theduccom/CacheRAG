#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;
int main(){
  int n;
  //ostream_iterator<int> out_it(cout, " ");
  while(cin >> n){
    int b = 1;
    vector<int> ans;
    while(n > 0){
      if((n & 1) == 1){
	ans.push_back(b);
      }
      b <<= 1;
      n >>= 1;
    }
    //copy(ans.begin(), ans.end(), out_it);
    for(int i = 0; i < ans.size() - 1; ++i){
      cout << ans[i] << " ";
    }
    cout << ans.back() << endl;
  }
  return 0;
}