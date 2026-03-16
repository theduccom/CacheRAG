#include <iostream>
using namespace std;

//ツ閉カツ篠堋療アsツづ景dxツ氾板姪堋つゥツづァ, ツ閉カツ篠堋療アtargetツつェツ出ツ個サツつキツづゥツつゥツづーツ板サツ津ィツつキツづゥ
bool check(string s, string target, int idx){
  for(int i = 0; i < target.size(); i++){
    if(s.length() <= idx + i){
      return false;
    }
    if(s[idx + i] != target[i]){
      return false;
    }
  }

  return true;
}

int main(){
  string s;
  int n;
  cin >> n;

  getline(cin, s); //ツ催?渉可づ個青ョツ青板づーツ偲ヲツづ?つスツつ?づ?づ個嘉シツ行ツつェツ残ツづ?づ?つ「ツづゥツづ個づ? ツ偲ヲツづ?づ?つィツつュ

  for(int i = 0; i < n; i++){
    getline(cin, s);

    for(int i = 0; i < s.length(); i++){
      //iツ閉カツ篠堋姪堋つゥツづァ"Hoshino"ツづ可づ按づ?づ?つ「ツづゥツづ按づァ, "Hoshina"ツづ可置ツつォツ環キツつヲ
      if(check(s, "Hoshino", i)){
        s[i + 6] = 'a';
      }
    }

    cout << s << endl;
  }
}