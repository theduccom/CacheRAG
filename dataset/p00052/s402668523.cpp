#include<iostream>
using namespace std;
int main(){
  unsigned long long a,cnt;
  while(cin >> a && a){
    cnt = 0;
    do{
      cnt += a/5;
    }while(a/=5);
    cout << cnt << endl;
  }
  return 0;
}