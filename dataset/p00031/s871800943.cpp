#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <map> // pair
#include <set>
#include <string>

#define MAXSIZE 200000
#define PI 3.141592653589
using namespace std;




int main(){
  int n;


  while (std::cin >> n) {
    int weight[10]={0};

    for(int j=9;j>=0;j--){
      if(n>=pow(2,j)){
        weight[j]=1;
        n-=pow(2,j);
      }
    }

    // for(int i=0;i<9;i++){
    //   if(weight[i]==1){
    //     std::cout << pow(2,i)<<" ";
    //   }
    // }
    // if(weight[9]==1){
    //   std::cout << "512" << '\n';
    // }

    int flag;
    int count=0;
    for(int i=9;i>=0;i--){
      if(count==2)break;
      if(weight[i]==1){
        flag=i;
        count++;
      }
    }

    if(count==1){
      std::cout << pow(2,flag) << '\n';
    }else{
      for(int i=0;i<=flag;i++){
        if(weight[i]==1){
          std::cout << pow(2,i) << " ";
        }
      }
      for(int i=9;i>=0;i--){
        if(weight[i]==1){
          std::cout << pow(2,i) << '\n';
          break;
        }
      }

    }



  }
}
