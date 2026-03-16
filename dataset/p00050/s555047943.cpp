#include<iostream>
#include<string>
#include<vector>
using namespace std;
#define loop(i,b,a) for(int i = b ; i < a; i ++)
#define rep(i,a) for(int i = 0 ; i < a; i ++)
int main(void){
  string str;
  getline(cin,str);
  string word[] = {"apple","peach"};
  rep(i,str.size()){
    rep(k,2)
    if(str[i  ] == word[k][0] &&
       str[i+1] == word[k][1] &&
       str[i+2] == word[k][2] &&
       str[i+3] == word[k][3] &&
       str[i+4] == word[k][4] ){
	rep(j,word[0].size())str[i+j] = word[(k?0:1)][j];
	break;
    }    
    cout<<str[i];
  }
  cout<<endl;
}