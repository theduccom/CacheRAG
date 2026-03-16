#include <iostream>
#include <cstdio>
using namespace std;

int h[13], cnt[5];
bool one = false, two = false, three = false, full = false, four = false, straight = false;

void init(){
  for(int i = 0; i < 13; i++){
    h[i] = 0;
  }
  one = false;
  two = false;
  three = false;
  full = false;
  four = false;
  straight = false;
}

void judge(){
  for(int i = 0; i < 13; i++){
    if(h[i] == 2) one = true;
  }
  
  for(int i = 0; i < 13; i++){
    if(h[i] == 3) three = true;
  }

  for(int i = 0; i < 13; i++){
    for(int j = 0; j < 13; j++){
      if(h[i] == 2 && h[j] == 2 && i != j)  two = true;
      if(h[i] == 3 && h[j] == 2 && i != j)  full = true;
    }
  }
    
  for(int i = 0; i < 13; i++){
    if(h[i] == 4) four = true;
  }
  
  for(int i = 0; i < 9; i++){
    if(h[i] != 0 && h[i+1] != 0 && h[i+2] != 0 && h[i+3] != 0 && h[i+4] != 0) straight = true;
  }
  
  if(h[0] != 0 && h[12] != 0 && h[11] != 0 && h[10] != 0 && h[9] != 0)  straight = true;
}

int main(void){
  while(scanf("%d,%d,%d,%d,%d", cnt, cnt+1, cnt+2, cnt+3, cnt+4) != EOF){
    init();
    for(int i = 0; i < 5; i++){
      h[cnt[i]-1]++;
    }
    
    for(int i = 0; i < 5; i++){
      cnt[i] = 0;
    }

    judge();
 
    if(straight){
      cout << "straight" << endl;
    }else if(four){
      cout << "four card" << endl;
    }else if(full){
      cout << "full house" << endl;
    }else if(three){
      cout << "three card" << endl;
    }else if(two){
      cout << "two pair" << endl;
    }else if(one){
      cout << "one pair" << endl;
    }else{
      cout << "null" << endl;
    }
  }
  return 0;
}