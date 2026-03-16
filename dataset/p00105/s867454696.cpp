#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
  map<string, vector<int> > i;
  string str;
  int n;
  int j;

  while(cin >> str >> n){
	i[str].push_back(n);
  }

  map<string, vector<int> >::iterator it = i.begin();
  while(it != i.end()){
	cout << (*it).first << endl;
	sort((*it).second.begin(), (*it).second.end());
	for(j=0;j<(*it).second.size()-1;j++){
	  cout << (*it).second[j] << " ";
	}
	cout << (*it).second[j] << endl;
	++it;
  }
}