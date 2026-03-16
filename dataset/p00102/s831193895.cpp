#include <iostream>
#include <sstream>
#include <iomanip>

int main(){
  int n;
  while(std::cin>>n){
    if(!n)return 0;
    int v[11][11] = {0};
    std::cin.get();
    for(int i=0;i<n;i++){
      std::string s;
      getline(std::cin,s);
      std::stringstream ss(s);
      int num;
      for(int j=0;j<n;j++){
      ss>>num;
      v[j][i]=num;
      v[n][i]+=num;
      v[j][n]+=num;
      v[n][n]+=num;
      }
    }

    for(int y=0;y<=n;y++){
      for(int x=0;x<=n;x++){
        std::cout<<std::right<<std::setw(5)<<v[x][y];
      }
      std::cout<<std::endl;
    }
  }
}