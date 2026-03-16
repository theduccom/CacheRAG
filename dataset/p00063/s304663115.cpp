#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  int sum = 0;

  while( cin >> s ) {
    bool flag = true;
    for(int i=0; i<s.size()/2; i++) {
      if( s[i] != s[s.size()-i-1] ) {
	flag = false;
	break;
      }
    }

    if( flag ) sum++;
  }

  cout << sum << endl;
}