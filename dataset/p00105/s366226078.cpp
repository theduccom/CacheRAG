#include <iostream>
#include <map>
#include <set>

using namespace std;

typedef map< string, set<int> > Dic;
Dic dic;

int main(){
  //map<string, int> dic;
  int num;
  string s;
  while(cin >> s >> num)
  {
    dic[s].insert(num);
  }
  
  for(Dic::iterator it = dic.begin() ; it != dic.end() ; it++)
  {
  	cout << it->first << endl;
  	int counter = 0;
  	for(set<int>::iterator set_it = it->second.begin() ; set_it != it->second.end() ; set_it++)
  	{
  		if(counter!=0) cout<<" ";
  		cout << *set_it;
  		counter++;
  	}
  	cout << endl;
  }

  return 0;
}