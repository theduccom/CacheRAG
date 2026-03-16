#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void output(int num){
  static vector<int> vec;
  if(num == -1){
    bool flag=true;
    reverse(vec.begin(),vec.end());
    for(int buf : vec){
      if(flag){
        flag=false;
        cout << buf;
      }
      else
        cout << " " << buf;     
    }
    cout << endl;
    vec.clear();
  }
  else
    vec.push_back(num);
}

void func(int weight){
  if(weight > 0){
    int buf=1;
    while(buf <= weight)
      buf <<= 1;
    buf >>=1;
    output(buf);
    func(weight-buf);
  }
}

int main(){
  int buf;
  while(cin >> buf){
    func(buf);
    output(-1);
  }
  return 0;
}