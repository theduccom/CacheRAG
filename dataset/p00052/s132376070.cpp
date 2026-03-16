#include<iostream>
using namespace std;

int main(){
  int n;
  while(cin >> n && n){
    int tmp,cou=0;
    tmp = n;
    while(tmp>0){
      cou += tmp/5;
      tmp /= 5;
    }
    cout << cou << endl;
  }
}