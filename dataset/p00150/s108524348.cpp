#include <iostream>
#include <vector>
int main(){
  std::vector<int> v;
  v.push_back(2);
  for(int i=3;i<=11000;i+=2){
    bool b = true;
    for(int j=0;i>=v[j]*v[j]&&b==true;j++){
      if(!(i%v[j]))b=false;
    }
    if(b)v.push_back(i);
  }
  int n;
  while(std::cin>>n){
    if(!n)return 0;
    for(int i=v.size()-1;i;i--)
      if(v[i]-v[i-1]==2&&v[i]<=n){std::cout<<v[i-1]<<" "<<v[i]<<std::endl;break;}
  }
}