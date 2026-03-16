#include <cstdio>
#include <string>
#include <utility>
#include <iostream>
using namespace std;

typedef pair<string, int> P;

P words[110];

int main() {
  int i=0;

  string name; int page;
  while(cin >> name >> page) {
    words[i].first = name;
    words[i].second = page;

    i++;
    // cout << name << page << endl;
  }

  int n = i;

  
  for (int j=0; j<n-1; j++) {
    for (int k=0; k<n-1-j; k++) {
      if (words[k].first > words[k+1].first ||
	  (words[k].first == words[k+1].first &&
	   words[k].second > words[k+1].second)) {
	P temp = words[k];
	words[k] = words[k+1];
	words[k+1] = temp;
      }
    }
  }


  /*
    for (int j=0; j<n; j++) {
    cout << words[j].first << " " << words[j].second << endl;
    }
  */
  
  
  bool cont = false;
  for (int j=0; j<n; j++) {
    if (words[j].first == words[j+1].first) {
      if (!cont) {
	cout << words[j].first << endl;
	cont = true;
      } 
	cout << words[j].second << " ";
    } else {
      if (cont) {
	cout << words[j].second << endl;
	cont = false;
      } else {
	cout << words[j].first << endl << words[j].second << endl;
      }
    }
  }
  
}