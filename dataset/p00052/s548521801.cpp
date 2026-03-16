#include<iostream>
using namespace std;

int main(){
  int n,num;

  for(cin >> n; n != 0;cin >> n){ 
    num = 0;
    for(int i = 5;i <= n;i = i*5){
      num = num + (n / i);
    
    }
    cout << num << endl;
  }
}