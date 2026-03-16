#include <iostream>
#include <string>
using namespace std;

int charToInt(char);
string sumStr(string, string);

int charToInt(char c) {
  return (int)c - (int)'0';
}

string sumStr(string a, string b) {
  int pa = a.length()-1, pb = b.length()-1;
  string str(83, '0');
  int pstr = str.length()-1;
  int next = 0;
  while(pa >= 0 && pb >= 0) {
    int temp = charToInt(a[pa]) + charToInt(b[pb]) + next;
    next = temp / 10;
    str[pstr] = (char)(temp%10+(int)'0');

    pa--;
    pb--;
    pstr--;
  }
  while(pa >= 0) {
    int temp = charToInt(a[pa]) + next;
    next = temp / 10;
    str[pstr] = (char)(temp%10+(int)'0');

    pa--;
    pstr--;
  }
  while(pb >= 0) {
    int temp = charToInt(b[pb]) + next;
    next = temp / 10;
    str[pstr] = (char)(temp%10+(int)'0');

    pb--;
    pstr--;
  }
  str[pstr] = (char)(next + (int)'0');

  for(int i = 0; i < str.length(); i++) {
    if(str[i] != '0') {
      return str.substr(i, str.length()-i);
    }
  }
  return "0";
}

int main() {
  int N;
  cin >> N;
  for(int i = 0; i < N; i++) {
    bool overflow = false;
    int data[N][8];
    string sum;
    for(int j = 0; j < 2; j++) {
      string str;
      cin >> str;
      if(str.length() > 80) overflow = true;
      if(!overflow) {
	if(j == 0) sum = str;
	else       sum = sumStr(sum, str);
        if(sum.length() > 80) overflow = true;
      }
    }

    if(overflow) cout << "overflow" << endl;
    else         cout << sum << endl;
  }
  return 0;
}