#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;

int main(){
  int i,size;
  vector<string> word;
  vector<int> page;
  string tmpw;
  int tmpp;
  set<string> idw;
  set<int> idp;

  while(cin >> tmpw >> tmpp){
    word.push_back(tmpw);
    page.push_back(tmpp);
  }

  size = word.size();
  for(i=0;i<size;i++)idw.insert(word[i]);

  size = page.size();
  set<string>::iterator itw = idw.begin();
  while(itw!= idw.end()){
    cout << *itw<< endl;
    for(i=0;i<size;i++){
      if(*itw== word[i]){
	idp.insert(page[i]);
      }
    }
    set<int>::iterator itp = idp.begin();
    int flag = 0;
    while(itp != idp.end()){
      if(flag)cout << " " << *itp;
      else cout << *itp;
      flag = 1;
      itp++;
    }
    cout << endl;
    idp.clear();
    itw++;
  }

  return 0;
}