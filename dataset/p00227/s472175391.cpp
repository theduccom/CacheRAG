#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int n,m;
  while(cin >> n >> m , n + m){
    int yasai[1000] = {0};

    for(int i = 1 ; i <= n ; i++){
      cin >> yasai[i];
    }

    sort(yasai,yasai+(n+1),greater<int>());

    for(int i = n ; i >0 ; i--){
      yasai[i] = yasai[i-1];
    }
    int sum = 0;
    for(int i = 1 ; i <= n ; i++){
      if(i%m != 0)sum+=yasai[i];
    }
    cout << sum << endl;
  }
}