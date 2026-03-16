#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
  int ice[10];
  int n, tmp;

  while(cin >> n, n){
    memset(ice, 0, sizeof(ice));
    for(int i = 0 ; i < n ; i++){
      cin >> tmp;
      ice[tmp]++;
    }
    
    for(int i = 0 ; i < 10 ; i++){
      if(ice[i] == 0){
	cout << '-' << endl;
	continue;
      }
      
      for(int j = ice[i] ; j > 0 ; j--){
	cout << '*';
      }
      cout << endl;
    }
  }
  return 0;
}