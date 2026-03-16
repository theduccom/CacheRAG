#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int cnt = 0, flag;
    
    while(cin >> s){
      bool flag = false;      
      int l = s.length();
      for(int i = 0; i <= l/2; i++){
        if(s[i] != s[l-i-1]){
          flag = true; break;
        }
      }
      if(flag == false) cnt++;
    }
    
    cout << cnt << endl;
}