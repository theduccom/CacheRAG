#include <iostream>
#include <algorithm>
#define N 100
using namespace std;
struct data{
  string str;
  int n;
  bool operator<(const data & right)const{
    if(str!=right.str) return str<right.str;
    return n<right.n;
  }
};
int main(){
  int i=0;
  struct data d[N];
  while(1){
    cin >> d[i].str >> d[i].n;
    if(d[i].str=="") break;
    i++;
  }
  sort(d,d+i);
  cout << d[0].str << endl << d[0].n;
  for(int j=1;j<i;j++){
    if(d[j].str==d[j-1].str) cout << ' ' << d[j].n;
    else cout << endl << d[j].str << endl << d[j].n;
  }
  cout << endl;
  return 0;
}