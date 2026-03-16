#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  int c,d;
  cin >>c;
  int n[81];
  string a,b;
  for(;c>0;c--){
    for(int i=0;i<81;i++) n[i] = 0;
    cin >>a>>b;
    for(int i=0;i<min((int)a.size(),80);i++)n[i] = (int)(a[a.size()-i-1]-'0');
    for(int i=0;i<min((int)b.size(),80);i++)n[i] += (int)(b[b.size()-i-1]-'0');
    for(int i=0;i<80;i++){
      if(n[i]>=10){
	n[i+1]+=n[i]/10;
	n[i]%=10;
      }
    }
    if (n[80]>0||a.size()>80||b.size()>80)
      cout << "overflow" << endl;
    else{
      d = 80;
      while(!n[d])d--;
      if (d<0)d=0;
      for(;d>=0;d--)
	cout << n[d];
      cout << endl;
      }
  }
  return 0;
}