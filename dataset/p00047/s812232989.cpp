#include<iostream>
#include<map>

using namespace std;

int main(){

  char from, tra, to;

  map <char, int> M;

  M['A'] = 1;
  M['B'] = 0;
  M['C'] = 0;

  while(cin >> from >> tra >> to){
    int temp = M[from];
    M[from] = M[to];
    M[to] = temp;
  }

  for(char i = 'A'; i <= 'C'; i++){
    if(M[i] == 1){
      cout << i << endl;
      break;
    }
  }

  return 0;
}