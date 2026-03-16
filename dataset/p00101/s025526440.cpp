#include <iostream>
using namespace std;
int main(void){
  int n;
  cin>>n;
  string line;
  string s = "Hoshina";
  //cin.ignore();
  cin >> ws;
  while(getline(cin, line)){
    while(line.find("Hoshino")!=string::npos){
      line.replace(line.find("Hoshino"), s.size(), s);
    }
    cout<<line<<endl;
  }
  return 0;
}