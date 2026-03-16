#include <iostream>
#include <string>
using namespace std;

int main(){
  string in;
  getline(cin,in);
  for(int i=0;i<in.size();i++){
    if(islower(in[i])) in[i] = toupper(in[i]);
  }
  cout << in << endl;
  return 0;
}