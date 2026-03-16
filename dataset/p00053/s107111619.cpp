#include <iostream>
using namespace std;
int main(){
  int p[1000000];
  for(int i = 0 ; i < 1000000 ; i++)p[i] = i;
  p[0] = p[1] = 0;
  for(int i = 0 ; i*i < 1000000 ; i++){
    if(p[i])for(int j = i*2 ; j < 1000000 ; j += i){
	p[j] = 0;
      }
  }
  int t[10001] = {0};
  int s = 0;
  for(int i = 0 ; s < 10001 ; i++){
    if(p[i] != 0)t[s++] = p[i];
  }
  int n;

  while( cin >> n , n){
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
      sum += t[i];
    }
    cout << sum << endl;
  }
}