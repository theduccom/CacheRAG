#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<map>
#include<queue>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
using namespace std;


int main(){
  string alp = "abcdefghijklmnopqrstuvwxyz";
  string s;
  while( getline(cin, s) ){
    // cerr << s.size() << endl;
    bool f = false;
    int tmp = 0;
    for(int i=0; i<26; i++){

      for(int j=0; j<s.size()-4; j++){
        if( alp[ (s[j]-'a'+i)%26 ] == 't' && alp[ (s[j+1]-'a'+i)%26 ] == 'h' && alp[ (s[j+2]-'a'+i)%26 ] == 'i' && alp[ (s[j+3]-'a'+i)%26 ] == 's' ){
          f = true;
          break;
        }
        if( alp[ (s[j]-'a'+i)%26 ] == 't' && alp[ (s[j+1]-'a'+i)%26 ] == 'h' && alp[ (s[j+2]-'a'+i)%26 ] == 'a' && alp[ (s[j+3]-'a'+i)%26 ] == 't' ){
          f = true;
          break;
        }
        if( alp[ (s[j]-'a'+i)%26 ] == 't' && alp[ (s[j+1]-'a'+i)%26 ] == 'h' && alp[ (s[j+2]-'a'+i)%26 ] == 'e' ){
          f = true;
          break;
        }
        // if( s[j] == ' ' ) cerr << ' ';
        // else cerr << alp[ (s[j]-'a'+i)%26 ];
      }
      // cerr << endl;
      if( f ){
        // cerr << "  " << i << endl;
        tmp = i;
        break;
      }
    }
    // cerr << tmp << endl;

    for(int i=0; i<s.size(); i++){
      if( s[i] == ' ' || s[i] == '.' ) cout << s[i];
      else cout << alp[ (s[i] - 'a' + tmp)%26 ];
    }
    cout << endl;
  }

  return 0;
}








// EOF