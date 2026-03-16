#include <iostream>
#include <string>

using namespace std;

int main(void){
  string str;
  unsigned int pos;
  int n;
  cin >> n;
  cin.ignore();
  for(int i=0;i<n;i++){
	getline(cin,str);
	while(1){
	  pos = str.find("Hoshino",0);
	  if(pos == string::npos) break;
	  str.replace(pos,7,"Hoshina");
	}
	cout << str << endl;
  }
}