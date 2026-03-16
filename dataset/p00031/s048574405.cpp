#include <iostream>
#include <cmath>
#include <string>
#include <vector>


using namespace std;

int retMaxPow2(int n){
  int i=0;
  while(true){
    int tmp = pow(2, i);
    if(n<tmp){
      break;
    }
    i++;
  }

  return (i-1);
}

int main(){
  int tmp;
  vector<int> nums;
  while(cin >> tmp){
    int n = tmp;
    while(true){   
      // cout << n << " >= " << "2^" << retMaxPow2(n) << endl;
      nums.push_back(pow(2, retMaxPow2(n)));
      n -= pow(2, retMaxPow2(n));
      
      if(n==0){
	break;
      }
    }

    for(int i=0;i<nums.size();i++){
      if(i==nums.size()-1){
	cout << nums[nums.size()-1-i] << endl;
      }else{
	cout << nums[nums.size()-1-i] << " ";
      }
    }
    nums.clear();
      
  }
}