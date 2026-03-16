#include<iostream>
#include<string>
using namespace std;

int main(){

  int n, len;
  string str;

  cin >> n;
  getline(cin, str);
  for(int i=0; i<n; i++){
    getline(cin, str);
    len = str.length() - 6;
    for(int j=0; j<len; j++){
      if(str[j] == 'H' && str[j+1] == 'o' &&
         str[j+2] == 's' && str[j+3] == 'h' &&
         str[j+4] == 'i' && str[j+5] == 'n' &&
         str[j+6] == 'o'){
        str[j+6] = 'a';
        j += 6;
      }
    }
    
    cout << str << endl;
  }

  return 0;

}