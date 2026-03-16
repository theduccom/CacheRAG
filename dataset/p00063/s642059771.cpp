#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str;
  int n;
  int cut = 0;
  while (cin >> str){
    cut++;
    n = str.size();
    for (int i = 0; i < n; i++){
      if (str[i] != str[n-i-1]){
        cut--;
        break;
      }
    }
  }
  cout << cut << endl;

  return 0;

}