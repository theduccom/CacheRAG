#include <iostream>
#include <string>
using namespace std;
int main(){
  string str;
  getline(cin,str);

  for(int i = 0 ; i < str.size() ; i++){
    string a = "apple",p = "peach";
    int f = 1;
    if(str[i] == a[0]){
      for(int c = 0;c < 5; c++){
	if(a[c] != str[i + c])f = 0;
      }
      if(f)str.replace(i,5,"peach");
    }else if(str[i] == p[0]){
      for(int c = 0;c < 5; c++){
	if(p[c] != str[i + c])f = 0;
      }
      if(f)str.replace(i,5,"apple");
    }
}
  cout << str << endl;
}