#include <iostream>
#include <vector>

int main(){
  std::vector<int> v;
  v.push_back(2);
  for(int i = 3;v.size()<10001;i+=2){
    bool f = true;
    for(int j=0;v[j]*v[j]<=i;j++){
      if(!(i%v[j]))f=false;
    }
    if(f)v.push_back(i);
  }
  int n;
  while(std::cin>>n){
    if(!n)break;
    int sum=0;
    for(;n;n--){
      sum+=v[n-1];
    }
    std::cout<<sum<<std::endl;
  }
  return 0;
}