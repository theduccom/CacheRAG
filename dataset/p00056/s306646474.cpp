#include <iostream>
#include <set>
using namespace std;
bool p[50000];
int main()
{
  int i,j;
  set<int> s;
  for(i=2;i<50000;i++){
    if(!p[i]){
      s.insert(i);
      for(j=i*2;j<50000;j+=i){
	p[j] = true;
      }
    }
  }
  while(cin >> i,i){
    int c = 0;
    set<int>::iterator it = s.begin();
    while(it != s.end() && (*it) <= i / 2){
      if(s.find(i - *it) != s.end()) {
	c++;
      }
      it++;
    }
    cout << c << endl;
  }
  return 0;
}