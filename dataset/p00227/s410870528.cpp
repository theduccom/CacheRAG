#include <iostream>
#include <vector>
#include <algorithm>

int main(void){
  int n,m;
  while(std::cin >> n >> m && n!=0 && m!=0){
    std::vector<int> veg;
    for(int i=0;i<n;i++){
      int tmp;
      std::cin >> tmp;
      veg.push_back(tmp);
    }
    std::sort(veg.begin(),veg.end(),std::greater<int>());

    int sum =0;
    for(int i=0;i<n;i++){
      if((i+1)%m != 0){
        sum += veg[i];
      }
    }

    std::cout << sum << std::endl;
  }
  return 0;
}

