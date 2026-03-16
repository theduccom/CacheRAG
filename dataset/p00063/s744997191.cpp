#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

main(){

  string s,t;
  int count=0;

  while(cin >> s){

    t = s;//
    reverse(t.begin(),t.end());
    //if(s==t)count++;
    count += s==t;///////
  }

  cout << count << endl;

  return 0;

}