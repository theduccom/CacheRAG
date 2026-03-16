#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

bool debug = false;

int main(void){
  map<int,ll> m;
  vector<int> order;
  int n;
  long long no,amount,price;

  while(cin >> n){
	bool exist = false;
	if(!n) break;
	for(int i=0;i<n;i++){
	  cin >> no >> amount >> price;
	  if(find(order.begin(), order.end(), no) == order.end()){
		order.push_back(no);
		if(debug) cout << "pushed " << no << endl;
	  }
	  m[no] += (ll)amount*price;
	}
	for(int i=0;i<order.size();i++){
	  if(m[order[i]] >= 1e+6){
		cout << order[i] << endl;
		exist = true;
	  }
	}
	if(!exist) cout << "NA" << endl;
	m.clear();
	order.clear();
  }
}