#include <iostream>
using namespace std;
int p[50100];
int main()
{
  int i,j;
  for(i=2;i*i<50100;i++){
    if(p[i]==0){
      for(j=i*2;j<50100;j+=i){
	p[j] = 1;
      }
    }
  }
  while(cin >> i){
    for(j=i-1;p[j];j--){}
    cout << j << ' ';
    for(j=i+1;p[j];j++){}
    cout << j << endl;
  }
  return 0;
}