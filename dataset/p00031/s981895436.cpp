#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int w;  
  while(cin >> w){
	int bit = pow(2,9);
	vector<int> a;
	for(int i=0;i<10;i++){
	  if(w/bit) a.push_back(bit);
	  w = w%bit;
	  bit /= 2;
	}
	reverse(a.begin(),a.end());
	for(int i=0;i<a.size();i++){
	  cout << a[i];
	  if(i==a.size()-1) cout << endl;
	  else cout << ' ';
	}
  }
  return 0;
}