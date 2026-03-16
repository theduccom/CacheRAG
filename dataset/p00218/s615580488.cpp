#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct student{
  int math, eng, nat;
  double ave;
};

string solve(student s){
  if(s.math == 100 || s.eng == 100 || s.nat == 100){
    return "A";
  }else if(s.ave >= 80){
    return "A";
  }else if((s.math + s.eng)/2.0 >= 90){
    return "A";
  }else if(s.ave >= 70){
    return "B";
  }else if(s.ave >= 50 && (s.math >= 80 || s.eng >= 80)){
    return "B";
  }
  return "C";
}
  
int main(){
  int n;
  while(std::cin >> n, n){
    for (int i = 0; i < n; i++) {
      student s;
      std::cin >> s.math >> s.eng >> s.nat;
      s.ave = (s.math + s.eng + s.nat)/3.0;
      std::cout << solve(s) << std::endl;
    }
  }
  return 0;
}