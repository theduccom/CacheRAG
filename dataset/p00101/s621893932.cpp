#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int i, n;
  string str;
  string str2 = "Hoshino";
  string::iterator iter;

  cin >> n;

  for(i=0; i<=n; ++i){
    getline(cin, str);

    iter = str.begin();
    while(1){
      iter = search(iter, str.end(), str2.begin(), str2.end());
      if(iter == str.end()) break;

      iter += 6;
      *iter = 'a';
    }
    if(i != 0)
      cout << str << endl;
  }

  return 0;
}