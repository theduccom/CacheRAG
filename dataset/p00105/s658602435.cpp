#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair< string,int > p;

vector<p> book;

int main() {
  string s;
  int P;
  while(cin >> s >> P) {
    p temp;
    temp.first = s;
    temp.second = P;
    book.push_back(temp);
  }
  sort(book.begin(),book.end());
  bool r;
  string now = "";
  for(unsigned int i=0;i<book.size();i++) {
    if(now != book[i].first) {
      if(i!=0) cout << endl;
      now = book[i].first;
      cout << now << endl;
      r = false;
    }
    if(r) {
      cout << " ";
    }
    cout << book[i].second;
    r = true;
  }
  cout << endl;
}