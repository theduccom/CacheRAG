#include <iostream>

#include <sstream>

using namespace std;

int main(){
  int x,y,z;
  string tmp;
  int rec=0;
  int loz=0;

  //zñÌú»

  while(cin >> tmp){ //J}æØèðooÉ
    tmp.replace(tmp.find(","),1," ");
    tmp.replace(tmp.find(","),1," ");
    istringstream ss(tmp);
    ss >> x >> y >> z;
    if(x*x+y*y == z*z){
      rec++;
    }
    else if(x==y){
      loz++;
    }
  }
  cout << rec << endl << loz << endl;
}