#include<iostream>
//#include<algorithm>
#include<string>
using namespace std;
int main(){
  string s[100000];
  string a;
  int d[100000];
  int b;
  int count = 0;
  while(cin>>a>>b){
    s[count] = a;
    d[count] = b;
    count++;
  }
  for(int i=0;i<count;i++){
    for(int j=count-2;j>=i;j--){
      if(s[j]>s[j+1]){
	string mem = s[j];
	s[j] = s[j+1];
	s[j+1] = mem;
	int me = d[j];
	d[j] = d[j+1];
	d[j+1] = me;
      }
      else if(s[j]==s[j+1]&&d[j]>d[j+1]){
	string me = s[j];
	s[j] = s[j+1];
	s[j+1] = me;
	int mem = d[j];
	d[j] = d[j+1];
	d[j+1] = mem;
      }
    }
  }
  cout << s[0] << endl << d[0];
  for(int i=1;i<count;i++){
    if(s[i]==s[i-1]) cout << ' ' << d[i];
    else{
      cout << endl;
      cout << s[i] << endl << d[i];
    }
  }
  cout << endl;
  return 0;
}