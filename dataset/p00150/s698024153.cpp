#include <iostream>
using namespace std;
bool is[10010];

int main(){
  for(int i = 0; i < 10010; i++) is[i] = true;
  is[0]=is[1]=false;
  for(int i = 2; i < 10010; i++){
    if(is[i]){
      for(int j = 2; j*i < 10010; j++){
	is[j*i]=false;
      }
    }
  }
  int n,i;
  while(1){
    cin >> n;
    if(n == 0)break;
    for(i = n; i > 2; i--){
      if(is[i] && is[i-2]) break;
    } 
    cout << i-2 << " " << i << endl;
  }
  return 0;
}