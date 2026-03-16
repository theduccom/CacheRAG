#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector<int> ans;
  int n, flag;
  while(cin >> n){
    ans.clear();
    flag=0;
    if(n > 1023) return 0;
    for(int i=512; i >= 1; i /= 2){
      if(n - i >= 0){
	n -= i;
	ans.push_back(i);
      }
    }
    sort(ans.begin(), ans.end());
    vector<int>::iterator it = ans.begin();
    while( it != ans.end() ){
      if(flag == 0) {
	cout << *it;
	flag = 1;
      }
      else
	cout << " " << *it;
      ++it;
    }
    cout << endl;
    
  }
  return 0;
}