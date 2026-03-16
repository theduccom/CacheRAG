#include<bits/stdc++.h>
using namespace std;

typedef map<string,priority_queue<int,vector<int>,greater<int> > >Book;

int main(){
  int value;
  string str;
  Book book;
  int flag;
  while(cin>>str>>value){
    book[str].push(value);
  }
  for(Book::iterator it=book.begin();it!=book.end();++it){
    cout<<it->first<<endl;
    flag=0;
    while(!(it->second.empty())){
      if(flag)cout<<" ";
      flag=1;
      cout<<it->second.top();
      it->second.pop();
    }
    cout<<endl;
  }
  return 0;
}