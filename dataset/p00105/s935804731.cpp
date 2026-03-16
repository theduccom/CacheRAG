#include<iostream>
#include<string>
#include<utility>
#include<queue>
using namespace std;
typedef pair<string,int> book;
int main(){
  string word,com="";
  int page;
  priority_queue<book,vector<book>,greater<book> > index;
  while(cin >> word){
    cin >> page;
    index.push(book(word,page));
  }
  while(!index.empty()){
    com = index.top().first;
    cout << com << endl << index.top().second;
    index.pop();
    while(index.top().first == com){
      cout << " " << index.top().second;
      index.pop();
      if(index.empty()) break;
    }
    cout << endl;
  }
}