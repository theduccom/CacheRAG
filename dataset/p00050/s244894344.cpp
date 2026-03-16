#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  string str;
  vector<int> flag;
  getline(cin,str);
  string a = "apple", p = "peach";

  string::size_type a_p(str.find(a));
  flag.push_back(a_p);

  while(a_p != string::npos){
    str.replace(a_p, a.size(), p);
    a_p = str.find(a, a_p + a.size());
	flag.push_back(a_p);
  }

  string::size_type p_p(str.find(p));
  vector<int>::iterator check = find(flag.begin(),flag.end(),p_p);

  while(p_p != string::npos){
    if(check == flag.end()){
	  str.replace(p_p, p.size(), a);
	}
    p_p = str.find(p, p_p + p.size());
	check=find(flag.begin(),flag.end(),p_p);
  }

  cout << str << endl;

  return 0;
}