#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(){
   string str,str_r;
   int cnt = 0;
   while(cin >> str){
      str_r = str;
      reverse(str_r.begin(),str_r.end());
      if(str == str_r) cnt++;
   }
   cout << cnt << endl;
   return 0;
}