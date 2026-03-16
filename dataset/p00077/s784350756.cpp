#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(void){
  char tmp;
  string str;
  int times;

  while(getline(cin, str)){
	if(str.empty()) break;
	istringstream iss(str);

	for(int j=0;j<str.size();){
	  iss >> tmp;
	  j++;
	  if(tmp != '@'){
		cout << tmp;
	  }else{
		iss >> tmp;
		j++;
		times = tmp - '0';
		iss >> tmp;
		j++;
		for(int i=0;i<times;i++){
		  cout << tmp;
		}
	  }
	}
	cout << endl;
  }
}