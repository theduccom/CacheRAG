#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(vector<string> p) {
  char c;
  for (int i=0;i<8;i++)
  for (int j=0;j<8;j++)
  if (p[i][j]=='1') {
    if (p[i][j+1]=='1' && p[i+1][j]=='1' && p[i+1][j+1]=='1') c='A';
    else if (p[i+1][j]=='1' && p[i+2][j]=='1' && p[i+2][j]=='1') c='B';
    else if (p[i][j+1]=='1' && p[i][j+2]=='1' && p[i][j+3]=='1') c='C';
    else if (p[i+1][j]=='1' && p[i+1][j-1]=='1' && p[i+2][j-1]=='1') c='D';
    else if (p[i][j+1]=='1' && p[i+1][j+1]=='1' && p[i+1][j+2]=='1') c='E';
    else if (p[i+1][j]=='1' && p[i+1][j+1]=='1' && p[i+2][j+1]=='1') c='F';
    else if (p[i][j+1]=='1' && p[i+1][j]=='1' && p[i+1][j-1]=='1') c='G';
    cout<<c<<endl;
    return;
  }
}

int main(int argc, char const* argv[]) {
  string empty;
  while (true) {
    vector<string> plane(14);
    for (int i=0;i<8;i++) getline(cin, plane[i]);
    for (int i=0;i<8;i++) plane[i]+="000000";
    for (int i=8;i<14;i++) plane[i]="00000000000000";
    
    solve(plane);
    
    if (!getline(cin, empty)) break;
  }
  return 0;
}