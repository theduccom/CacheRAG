#include<iostream>
#include<cstring>
using namespace std;
int main(){
  char c[101];
  int h;
  int l;
  while(cin>>c){
    l = strlen(c);
    for(int i=0;i<l;i++){
      if(c[i]!='@') cout << c[i]; 
      else{
	i++;
	h = c[i] - '0';
	i++;
      for(int j=0;j<h;j++) cout << c[i];
      }
    }
    cout << endl;
  }
  return 0;
}