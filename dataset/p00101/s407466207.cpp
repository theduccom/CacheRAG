#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  
  scanf("%d%*c", &n);
  while (n--){
    string str;
    getline(cin, str);
    while (str.find("Hoshino") != -1){
      str.insert(str.find("Hoshino"), "Hoshina");
      str.erase(str.find("Hoshino"), 7);
    }

    cout << str << '\n';
  }

  return (0);
}