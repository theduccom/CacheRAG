#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
  int h,w;
  while(cin>>h>>w,h||w){
    int x=0,y=0;
    vector<string> map(h);
    for(auto &str:map)
      cin>>str;
    while(x!=-1){
      char tile=map[y][x];
      map[y][x]='=';
      switch(tile){
        case '>':
          x++;
          break; 
        case '<':
          x--;
          break;  
        case '^':
          y--;
          break;
        case 'v':
          y++;
          break;
        case '.':
          cout<<x<<' '<<y<<endl;
          x=-1;
          break;
        case '=':
          cout<<"LOOP"<<endl;
          x=-1;
          break;
      }

    }
  }

}