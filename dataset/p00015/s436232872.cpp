#include <iostream>
#include <string>
using namespace std;

void str_plus(string &str, int d, int i){
  int keta = str.size()-i-1;//?????¨?¶??????????????????±???
  if(keta < 0){
    str.insert(0, "0");
    keta++;
  }
  int r = str[keta] - '0' + d;
  str[keta] = '0' + r % 10;
  if(r/10)
    str_plus(str, r/10, i+1);
}
int main(){
  int n;
  string str1, str2;
  cin >> n;
  for(int i = 0;i < n;i++){
    cin >> str1 >> str2;
    for(int i = 0; i < str2.size(); i++)
      str_plus(str1, str2[str2.size()-i-1]-'0', i);

    if(str1.size()>80)
      cout << "overflow" << endl;
    else
      cout << str1 << endl;
  }
  return 0;
}