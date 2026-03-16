#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
  int n;
  while(cin >> n, n){
    int id, cnt = 0;
    ll a, num, sum[5000];
    fill(sum, sum+5000, 0);
    vector<int> in;
    for(int i = 0; i < n ; i++){
      cin >> id >> a >> num;
      if(sum[id] <= 1000000)
	sum[id] += a*num;
      if(find(in.begin(), in.end(),id)==in.end()){
	in.push_back(id);
      }
    }

    for(int i = 0; i < in.size(); i++){
      if(sum[in[i]] >= 1000000){
	cnt++;
	cout << in[i] << endl;
      }
    }
    if(!cnt) cout << "NA" << endl;
  }
  return 0;
}