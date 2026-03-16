#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char *argv[]){
  int n;
  while(std::cin >> n, n){
  vector<int> ice(10, 0);
  for (int i = 0; i < n; i++) {
    int tmp;
    std::cin >> tmp;
    ice[tmp]++;
  }
  for (int i = 0; i < 10; i++) {
    if(ice[i] == 0)std::cout << "-";
    for (int j = 0; j < ice[i]; j++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
  }
  return 0;
}