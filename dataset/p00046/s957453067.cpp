#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  vector<double> h;
  double in;
  while(cin >> in){
	h.push_back(in);
  }
  sort(h.begin(),h.end());
  cout << h[h.size()-1]-h[0] << endl; 
  return 0;
}