#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
using namespace std;

int main(){
  int n;cin>>n;
  for(int j=0;j<n;++j){
    vector<char> a(8);
    for(int i=0;i<8;++i){
      cin>>a[i];
    }
    vector<char> b=a;
    sort(begin(a),end(a),greater<char>());
    sort(begin(b),end(b));

    string max_(a.begin(),a.end()),min_(b.begin(),b.end());
    cout << stoi(max_) - stoi(min_) << endl;
  }
  return 0;
}