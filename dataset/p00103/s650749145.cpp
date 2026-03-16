#include <iostream>
#include <string>

int main(){
  int n;
  int base[3];
  int out, score;
  
  std::string event;
  std::cin >> n;
  for(int i=0; i<n; i++){
    base[0] = 0;
    base[1] = 0;
    base[2] = 0;
    out = 0;
    score = 0;
    while(out!=3){
      std::cin >> event;
      if(event=="HIT"){
        if(base[2]>=1){
          base[2]--;
          score++;
        }
        if(base[1]>=1){
          base[1]--;
          base[2]++;
        }
        if(base[0]>=1){
          base[0]--;
          base[1]++;
        }
        base[0]++;
      }else if(event=="HOMERUN"){
        score++;
        score += base[2];
        base[2] = 0;
        score += base[1];
        base[1] = 0;
        score += base[0];
        base[0] = 0;
      }else{
        out++; 
      }
    }
    std::cout << score << std::endl;
  }
  
  return 0;
}