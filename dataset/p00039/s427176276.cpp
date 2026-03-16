#include <vector>
#include <iostream>
using namespace std;


int changeTheChar(char c){

  if(c=='I'){
    return 1;
  }else if(c=='V'){
    return 5;
  }else if(c=='X'){
    return 10;
  }else if(c=='L'){
    return 50;
  }else if(c=='C'){
    return 100;
  }else if(c=='D'){
    return 500;
  }else if(c=='M'){
    return 1000;
  }

  

  return 0;

}

int main()
{
  string str;
  while(cin >> str){

    vector<int> roman(str.size(), 0);
    // ????????????
    for(int i=0;i<str.size();i++){
      roman[i] = changeTheChar(str[i]);
    }

    for(int i=0;i<roman.size();i++){
      // cout << roman[i] << " ";
    }

    int res = 0;
    while(roman.size()>0){
      int maxI=0;
      int maxIndex;
      // ?????§???????´¢
      for(int i=roman.size()-1;i>=0;i--){
	if(maxI <= roman[i]){
	  maxI = roman[i];
	  maxIndex = i;
	}
      }
      // cout << maxIndex << endl;
      // cout << maxI << endl;

      if(maxIndex!=0){
	res += roman[maxIndex] - roman[maxIndex-1];
	roman.erase(roman.begin());
	roman.erase(roman.begin());
      }else{
	res += roman[maxIndex];
	roman.erase(roman.begin());
      }

      // cout << res << endl;
    }

    cout << res << endl;


  }




  return 0;
}