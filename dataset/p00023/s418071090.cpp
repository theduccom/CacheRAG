#include<iostream>
#include<cmath>


int main(){
  int n;
  double xa,ya,ra,xb,yb,rb,d;
  std::cin >> n;

  for(int i=0;i<n;i++){
    std::cin >> xa >> ya >> ra
             >> xb >> yb >> rb;
    d = std::sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
    /*if(ra+rb < d){
      std::cout << (int)0 << std::endl;
      break;
    }
    if(ra+d < rb){
      std::cout << (int)-2 << std::endl;
      break;
    }
    if(rb+d < ra){
      std::cout << (int)2 << std::endl;
    }else{
      std::cout << (int)1 << std::endl;
    }*/
    std::cout << (d<=ra+rb?d+rb>=ra?d+ra>=rb?1:-2:2:0) << std::endl;
  }
}