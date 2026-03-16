#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
struct po{
  string str;
  vector <int> page;
};


int main() {
  
  po ls[1001];
  
  int a=0;
  string ch;
  int b;
  while(cin >>ch>> b){
    int flg = 0;

    for(int i=0;i<a;i++) 
      if(ch == ls[i].str){
	ls[i].page.push_back(b);
	flg = 1;
	break;
      }
    
    if(flg == 1) continue;
    ls[a].str = ch;
    ls[a].page.push_back(b);
    a++;
  }


  for(int i=0;i<a-1;i++) 
    for(int j=a-1;j>i;j--)
      if(ls[j].str < ls[j-1].str) {
	po t = ls[j];
	ls[j] = ls[j-1];
	ls[j-1] = t;
      }

  for(int i=0;i<a;i++) {
    cout << ls[i].str << endl;
      sort(ls[i].page.begin(),ls[i].page.end());
    for(int j=0;j<ls[i].page.size();j++){
      cout << ls[i].page[j];
      if(j != ls[i].page.size()-1) cout <<" ";
    }
    cout << endl;
  }


  return 0;
}