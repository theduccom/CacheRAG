#include<iostream>
#include<string>
#include<algorithm> 

using namespace std;

int main(){
  int n;
  string str;
  string apple = "apple";
  string peach = "peach";
  string::iterator i, j;

  getline(cin, str);

  i = str.begin();
  j = str.begin();
  while(1){
    i = search(i, str.end(), apple.begin(), apple.end());
    j = search(j, str.end(), peach.begin(), peach.end());
    if(i == str.end() && j == str.end()) break;

    if(i < j){
      i = str.erase(i, i+apple.size());
      str.insert(i, peach.begin(), peach.end());
    }else{
      j = str.erase(j, j+peach.size());
      str.insert(j, apple.begin(), apple.end());
    }
  }

  cout << str << endl;
  return 0;
}