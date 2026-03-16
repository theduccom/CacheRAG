#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

typedef unsigned long long ll;

ll data[4001];
vector<int> V;

void print(){
  vector<int> M;
  for(int i = 0; i < 4001; i++)
    if(data[i] >= 1000000) M.push_back(i);
  if(M.size()){
    for(int i = 0; i < V.size(); i++)
      if(binary_search(M.begin(),M.end(),V[i])) cout << V[i] << endl;
  }else cout << "NA" << endl;
}
int main(){
  ll in;
  while(cin >> in && in){
    V.clear();
    vector<int> VC;
    fill(data,data+4001,0);
    for(int i = 0; i < in; i++){
      sort(VC.begin(), VC.end());
      ll num,p,q;
      cin >> num >> p >> q;
      if(!binary_search(VC.begin(),VC.end(),num)){
	V.push_back(num);
	VC.push_back(num);
      }
      if(data[num] < 1000000) data[num] += p*q;
    }
    print();
  }
  return 0;
}