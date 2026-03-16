#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  vector<float> mountains;
  float tmp;
  while(cin >> tmp){
    mountains.push_back(tmp);
  }
  float max, min;
  max = *max_element(mountains.begin(), mountains.end());
  min = *min_element(mountains.begin(), mountains.end());
  cout << max - min << endl;
}