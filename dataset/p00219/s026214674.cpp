#include <iostream>
using namespace std;
int main(){
  int n;
  while(  cin >> n,n ){
  int b,t[10000] = {0};
    for(int i = 0 ; i < n ; i++ ){
      cin >> b;
      ++t[b];
    }
    for(int i = 0 ; i <= 9 ; i++ ){
	if(t[i] == 0)cout << '-';
      for(int j = 1 ; j <= t[i]; j++ ){
	cout << '*';
      }
      cout << endl;
    }
  }
}