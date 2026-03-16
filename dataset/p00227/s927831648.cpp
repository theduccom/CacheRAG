#include <iostream>
#include <list>

int main() {
  int num,bag,sum;
	
  while(std::cin >> num >> bag){
	
    if(num!=0 && bag!=0){
      std::list<int>  beg;
      for(int i=0;i<num;++i){
	int price;
	std::cin >> price;
	beg.push_back(price);
      }
      beg.sort(std::greater<int>());
      sum=0;
	        
      for(int i=1;beg.empty()!=true;i++){	   
        if(i%bag != 0){
          sum+=beg.front();
        }	
        beg.pop_front();
      }
      std::cout << sum << std::endl;
    }
  }
  return 0;
}