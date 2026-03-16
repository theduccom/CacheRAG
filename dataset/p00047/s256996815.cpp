#include <iostream>
#include <string>
using namespace std;

int main(){
  int ball[3]={1,0,0},b;
  string cup;
  while(cin>>cup){
    b = ball[(cup[0]-'A')];
    ball[cup[0]-'A'] = ball[(cup[2]-'A')];
    ball[(cup[2]-'A')] = b;
  }
  for(int i=0;i<3;i++)if(ball[i])cout<<(char)('A'+i)<<endl;
  return 0;
}