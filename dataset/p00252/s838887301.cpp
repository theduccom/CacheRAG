#include<iostream>
using namespace std;
int main(){
  int n[3];
  cin >> n[0] >> n[1] >> n[2];
  if(n[0]==1&&n[1]==1&&n[2]==0||n[0]==0&&n[1]==0&&n[2]==1) cout << "Open" << endl;
  if(n[0]==1&&n[1]==0&&n[2]==0||n[0]==0&&n[1]==1&&n[2]==0||n[0]==0&&n[1]==0&&n[2]==0) cout << "Close" << endl;
  return 0;
}