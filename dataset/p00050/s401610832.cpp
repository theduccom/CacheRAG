#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> apple;
vector<int> peach;

int main(void){
  string sentence;
  getline(cin, sentence);
  int i = 0;
  while(true){
    i = min(sentence.find("apple", i), sentence.find("peach", i));
    if(i < 0) break;
    if(sentence[i] == 'a'){
      sentence.replace(i, 5, "peach");
    }else if(sentence[i] == 'p'){
      sentence.replace(i, 5, "apple");
    }
    i++;
  }
  cout << sentence << endl;
  return 0;
}