#include <iostream>
using namespace std;

int main(void){
  int n;  
  
  cin >> n;
  cin.ignore();
  for (int i=0; i<n; i++){
    string str;
    string::size_type pos;
    getline(cin, str);
    while ((pos = str.find("Hoshino")) != string::npos){
      str[pos+6] = 'a';
    }
    cout << str << endl;
  }
  return 0;
}
