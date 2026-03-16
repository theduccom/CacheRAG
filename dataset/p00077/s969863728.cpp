#include <bits/stdc++.h>
using namespace std;

int main(void){
  string str;
  while(cin >> str){
    string ans;
    for(int p=0; p < str.length(); p++){
     if(str[p] != '@'){
        ans.append(1, str[p]);
     }else{
        p++;
        int len = str[p] - '0';
        p++;
        ans.append(len, str[p]);
     }
    }
    cout << ans << endl;
  }

  return 0;
}