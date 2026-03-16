#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const* argv[]) {
  string line;
  int i;
  while (cin>>line) {
    for (int i = 0;i<line.size();i++) {
      if (line[i] == '@') {
        for (int j='0';j<line[i+1];j++)
          cout<<line[i+2];
        i+=2;
      } else {
        cout<<line[i];
      }
    }
    cout<<endl;
  }
  return 0;
}