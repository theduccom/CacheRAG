#include <iostream>
using namespace std;
int main(){
  int p[100000];
  fill(p,p+100000,1);
  p[0]=p[1]=0;
  for(int i = 2 ; i*i < 100000 ; i++){
    if(p[i])for(int j = i*2 ; j < 100000 ; j+=i)p[j] = 0;
  }

  int n;
  while(cin >> n,n){
    for(int i = n ; i >= 5 ; i--){
      if(p[i] == 1 && p[i-2] == 1 ){
	cout << i-2 << " " << i << endl;
	break;
      }
    }
  }
  return 0;
}