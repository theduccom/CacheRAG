#include<iostream>
#include<cstdio>

int main(){
  int l[11];
  int v1,v2,sum;
  int x;

  //std::cout << (int)(5/2+0.51) <<std::endl;

  while(std::cin >> l[1]){
    sum = l[1];
    for(int i=2;i<11;i++){
      std::scanf(",%d",&l[i]);
      sum += l[i];
    }
    std::scanf(",%d,%d",&v1,&v2);
    if((sum*v1)%(v1+v2)==0){
      x = (sum*v1)/(v1+v2);
    }else{
      x = (sum*v1)/(v1+v2);
      ++x;
    }
    sum = 0;
    for(int i=1;i<11;i++){
      sum += l[i];
      if(x<=sum){
        std::cout << i << std::endl;
        break;
      }
    }
  }
}