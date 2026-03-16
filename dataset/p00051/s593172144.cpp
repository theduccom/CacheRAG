#include <iostream>
#include <cmath>
using namespace std;


int main(void){
  int N;
  cin >> N;
  for(int k = 0; k < N; k++){
    int maxint = 0, minint = 0;
    string num1, num2, maxnum, minnum;
    cin >> num1;
    num2 = num1;
    /*Maximum Combination*/
    while(maxnum.size() < num1.size()){
      int index;
      char nowmaxnum = '0';
      for(int i = 0; i < num1.size(); i++){
        if(num1[i] > nowmaxnum){
          nowmaxnum = num1[i];
          index = i;
        }
      }
      num1[index] = '0';
      maxnum.insert(maxnum.end(), nowmaxnum);
    }

    /*Minimum Combination*/
    while(minnum.size() < num2.size()){
      int index;
      char nowminnum = '9';
      for(int i = 0; i < num2.size(); i++){
        if(num2[i] < nowminnum){
          nowminnum = num2[i];
          index = i;
        }
      }
      num2[index] = '9';
      minnum.insert(minnum.end(), nowminnum);
    }

    /*String to int*/
    for(int i = 0; i < maxnum.size(); i++){
      maxint += (maxnum[i] - '0') * (int)pow(10, maxnum.size() - i - 1);
    }
    
    for(int i = 0; i < minnum.size(); i++){
      minint += (minnum[i] - '0') * (int)pow(10, minnum.size() - i - 1);
    }
    cout << maxint - minint << endl;
  }
  return 0;
}