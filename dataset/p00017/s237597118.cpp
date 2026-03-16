#include <iostream>
#include <string>
using namespace std;

int size;
string str;
void change()
{
  for (int i = 0; i < size; i++){
    if ('a' <= str[i] && str[i] <= 'y'){
      str[i]++;
    }
    else if (str[i] == 'z'){
      str[i] = 'a';
    }
  }
}

int main()
{
 // string str;

  while (getline(cin, str), str != ""){
    size = str.size();

    for (;;){
      if (str.find("the") != -1 || str.find("this") != -1 || str.find("that") != -1){
        cout << str << endl;
        break;
      }
      change();
    }
    str = "";
  }
  return 0;
}