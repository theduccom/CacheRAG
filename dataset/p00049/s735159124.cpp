#include <iostream>

using namespace std;

int main(){
  int num,A=0,B=0,AB=0,O=0;
  char tr;
  string bl;
  while(cin >> num >> tr >> bl){
	if(bl=="A") A++;
	else if(bl=="B") B++;
	else if(bl=="AB") AB++;
	else if(bl=="O") O++;
  }
  cout << A << endl 
	   << B << endl
	   << AB << endl
	   << O << endl;
  return 0;
}