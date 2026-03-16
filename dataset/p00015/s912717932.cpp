#include<iostream>
#include<string>
#include<stdio.h>

char iota(int n){
  switch (n) {
    case 0: return '0';
    case 1: return '1';
    case 2: return '2';
    case 3: return '3';
    case 4: return '4';
    case 5: return '5';
    case 6: return '6';
    case 7: return '7';
    case 8: return '8';
    case 9: return '9';
  }
  return '0';
}

int main(){

  std::string num1;   //("10000");
  std::string num2;   //("990000");
  char sum[100]={};
  int n,i,j,flag=0,temp;

  std::cin >> n;
  //n=1;

  for(i=0;i<n;i++){
    for(j=0;j<100;j++){
      sum[j]='\0';
    }
    std::cin >> num1 >> num2;
    if(num1.size()<num2.size()){
      num1.swap(num2);
    }
    //std::cout << num1 << std::endl;
    //std::cout << num2 << std::endl;
    for(j=0;j<num1.size();j++){
      if(j<num2.size()){
        temp = (num1[num1.size()-j-1]-'0')+(num2[num2.size()-j-1]-'0');
      }
      if(j>=num2.size()){
        temp = num1[num1.size()-j-1]-'0';
      }
      if(flag){
      ++temp;
      flag = 0;
      }
      if(temp>9){
        temp -= 10;
        flag = 1;
      }
      sum[j] = iota(temp);
    }
    if(flag){
      sum[j] = '1';
      flag = 0;
    }
    //printf("%s\n",sum);
    j=0;
    while(sum[j]!='\0'){
      ++j;
    }
    //std::cout << j <<std::endl;
    if(j>80){
      std::cout << "overflow" << std::endl;
    }else{
      while(j>0){
        printf("%c",sum[j-1]);
        --j;
      }
      std::cout << std::endl;
    }
  }
}