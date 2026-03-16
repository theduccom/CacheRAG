#include<bits/stdc++.h>
using namespace std;
int len[] = {5,7,5,7,7};
int main(){
  string str;
  map<char,int> score;
  score['I'] = 1;
  score['V'] = 5;
  score['X'] = 10;
  score['L'] = 50;
  score['C'] = 100;
  score['D'] = 500;
  score['M'] = 1000;
  while(cin >> str){
    int ans = 0;
    for(int i=0;i<str.size();i++){
      if(i == str.size()-1) ans += score[str[i]];
      else {
	if(score[str[i]] < score[str[i+1]]) ans -= score[str[i]];
	else ans += score[str[i]];
      }
    }
    cout << ans << endl;
  }
}