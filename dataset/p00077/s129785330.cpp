#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int Cast(char);

int main(){
  int i, n;
  char c;
  string str;
  string::iterator iter;

  while(cin >> str){
    iter = str.begin();

    while(iter != str.end()){
      if(*iter == '@'){
	n = Cast(*(iter+1));
	c = *(iter+2);
	iter = str.erase(iter, iter+3);

	for(i=0; i<n; ++i)
	  iter = str.insert(iter, c);
      }

      ++iter;
    }
    cout << str << endl;
  }

  return 0;
}

int Cast(char c){
  int x;
  x = c - 48;
  return x;
}