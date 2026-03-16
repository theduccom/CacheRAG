#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
  int m,n,a,b,sum, temp;
  int ans;
  priority_queue<int> que;

  while(1) {
    sum = 0;
    cin>>n>>m;

    if(n == 0 && m == 0){
      break;
    }

    for(int i = 0; i<n; ++i){
      cin>>a;
      que.push(a);
    }

    for(int i = 1;i<=n;++i){
      b = que.top();
      que.pop();
      if(i % m != 0){
	sum += b;
      }
    }

    cout << sum << endl;
  }
  return 0;
}