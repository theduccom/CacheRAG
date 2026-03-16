#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){
  int a;
  int count = 0;
  std::vector<int> v;
  std::vector<std::vector<int> > x;
  while(std::cin >> a){
    v.push_back(a);
    count++;
  }
  int i;
  for(i = 0; i < count; i++){
    int data;
    data = v[i];
    int j;
    std::vector<int> w;
    for(j = 0; j < 10; j++){
      if(data == 0){
        break;
      }
      if(std::pow(2,9-j) <= data){
        w.push_back(std::pow(2,9-j));
        data -= std::pow(2,9-j);
      }
    }
    std::sort(w.begin(),w.end());
    x.push_back(w);
   }
  int k;
  for(k =0; k<count; k++){
    int l;
    for(l = 0; l<x[k].size(); l++){
      std::cout << x[k][l];
      if(l + 1 < x[k].size()){
        std::cout << " ";
      }
    }
    std::cout << "\n";
  }
  return 0;
}