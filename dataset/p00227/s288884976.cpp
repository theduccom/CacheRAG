#include <iostream>
#include <queue>

int main(){
  std::priority_queue<int> price;
  int n,m;

  while(std::cin >> n >> m){
    int sum = 0;
    if(n == 0 && m == 0){ break; }
    for(int i = 0; i < n; ++i){
      int temp;
      std::cin >> temp;
      price.push(temp);
    }
    for(int i = 1; i <= n; ++i){
      if(i%m != 0){
        sum += price.top();
        price.pop();
      }
      else{
        price.pop();
      }
    }
    std::cout << sum << std::endl;
  }

  return 0;
}