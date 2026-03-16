#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;
int main(){
  char cc[1000];
  cin.getline(cc,1000);
    for(int i=0;i<strlen(cc);i++){
      if(cc[i]=='a'&&cc[i+1]=='p'&&cc[i+2]=='p'&&cc[i+3]=='l'&&cc[i+4]=='e'){
	cc[i] = 'p';
	cc[i+1] = 'e';
	cc[i+2] = 'a';
	cc[i+3] = 'c';
	cc[i+4] = 'h';
      }
      else if(cc[i]=='p'&&cc[i+1]=='e'&&cc[i+2]=='a'&&cc[i+3]=='c'&&cc[i+4]=='h'){
	cc[i] = 'a';
	cc[i+1] = 'p';
	cc[i+2] = 'p';
	cc[i+3] = 'l';
	cc[i+4] = 'e';
     }
      cout << cc[i];
    }
  cout << endl;
  return 0;
}