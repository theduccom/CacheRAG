#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<functional>
using namespace std;

int main(){

  string str, s;
  int n, len, high, low;
  
  cin >> n;

  for(int i=0; i<n; i++){
    cin >> str;

    high = 0;
    low = 0;
    for(int j=0; j<2; j++){
      s = str;
      len = str.length();
      if(j == 0){
        sort(&str[0], &str[0]+len, greater<int>());
        for(int k=len-1; k>=0; k--){
          high += ((int)str[k] - '0') * pow(10, len-1-k);
        }
      }
      else{
        sort(&str[0], &str[0]+len);
        for(int k=len-1; k>=0; k--){
          low += ((int)str[k] - '0') * pow(10, len-1-k);
        }
      }
    }
    
    cout << high - low << endl;

  }

  return 0;

}