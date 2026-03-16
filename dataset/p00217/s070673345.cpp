#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

  int n;

  while(cin >> n && n != 0){
  vector<pair<int, int> > v;
    for(int i = 0; i < n; i++){
      int p,d1,d2;
      cin >> p >> d1 >> d2;
      pair<int, int> tmp(d1+d2,p);
      //      cout << tmp.first << " " << tmp.second << endl;
      v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    cout << v[n-1].second << " "<< v[n-1].first << endl;
  } 

  return 0;
}