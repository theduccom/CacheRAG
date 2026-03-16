#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<int> ans;
int main(){
  int n;

  cin >> n;
  for(int i=0; i<n; ++i){
    int i_num,i_max,i_min;
    string num;
    string max;
    string min;

    cin >> num;
    min = num;
    max = num;

    sort(begin(min),end(min));
    sort(begin(max),end(max),greater<char>());
    //cout << "min = " << min << endl;
    //cout << "max = " << max << endl;
    i_min = stoi(min);
    i_max = stoi(max);
    i_num = i_max - i_min;
    ans.push_back(i_num);
  }
  
  for(auto i: ans){
    cout << i <<endl;
  }
  return 0;
}