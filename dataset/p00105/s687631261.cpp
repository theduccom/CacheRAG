#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

//ツつアツづ個偲ィツづ個姪「ツ妥ィツづ? ツ連ツ想ツ配ツ療アツづーツ使ツつ、ツづ?氾アツ湘ュツづ可嘉ーツつォツづ「ツつキツつ「ツづ?つキ
map<string,vector<int> > pages;

int main(){
  string s;
  int p;

  while(cin >> s >> p){
    pages[s].push_back(p);
  }

  map<string,vector<int> >::iterator iter;

  //ツマツッツプツづ個イツテツδ?ツタツづ? ツ篠ォツ渉堕篠ョツ渉?づ?要ツ素ツづーツ偲ヲツ督セツつオツづ?つュツづェツづゥツづ個づ?つサツづ個づ慊づ慊δ?ツプツつキツづェツづ篠つ「ツつ「
  for(iter = pages.begin(); iter != pages.end(); iter++){
    string name = iter->first;
    vector<int> v = iter->second;
    sort(v.begin(), v.end());

    cout << name << endl;

    for(int i = 0; i < v.size(); i++){
      if(i != 0) cout << " ";
      cout << v[i];
    }

    cout << endl;
  }
}