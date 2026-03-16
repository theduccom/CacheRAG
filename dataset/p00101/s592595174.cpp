#include <iostream>
#include <cstring>
using namespace std;

int main(void){
  string sen;
  int n;
  cin >> n;
  cin.ignore();
  for(int i = 0; i < n; i++){
    getline(cin, sen);
    int k = 0;
    while(true){
      k = sen.find("Hoshino", k);
      if(k < 0) break;
      sen[k+6] = 'a';
      k++;
    }
    cout << sen << endl;
  }
  return 0;
}