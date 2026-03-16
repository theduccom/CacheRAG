#include<iostream>
#include<vector>
#include<string>
#include<bitset>
using namespace std;

vector<int> ans;
int main(){
  int n;
  
  cin >> n;
  for(int i=0; i<n; ++i){
    bitset<3> base{0};
    int flag = 0;
    int score = 0;
    string nock;

    while(flag!=3){
    cin >> nock;

    if(nock == "HIT"){
      if(base == 000){
	base = 001;
      }else if(base[2]){
	base = base << 1;
	base |= 001;
	++score;
      }else{
	base = base << 1;
	base |= 001;
      }
    }
    
    if(nock == "OUT"){
      ++flag;
      if(flag == 3){
	ans.push_back(score);
	//cout << "end" << endl;
      }
    }
    if(nock == "HOMERUN"){
      int j;
      j = base.count();
      score += j + 1;
      base = 000;
    }
    }
  }
  for(auto i:ans){
    cout << i << endl;
  }
  return 0;
}