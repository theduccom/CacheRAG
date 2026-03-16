//46
#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
  map<string,int> bg;
  int n;
  string b;
  while((cin>>n).ignore()>>b){
    bg[b]++;
  }
  cout<<bg["A"]<<endl<<bg["B"]<<endl<<bg["AB"]<<endl<<bg["O"]<<endl;
  return 0;
}