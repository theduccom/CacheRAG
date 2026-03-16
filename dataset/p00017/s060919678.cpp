#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<bitset>
#include<utility>
#include<string>

using namespace std;

main(){
  int n,i,j,l,temp;
  string b;
  while(getline(cin,b)){
    while(1){
      for(i=0;i<b.size();i++){
	if(isalpha(b[i])){
	  if(b[i]=='z'){
	    b[i]='a';
	  }
	  else{
	    b[i]=b[i]+1;
	  }
	}
      }
      if(b.find("the")!=-1 || b.find("that")!=-1 || b.find("this")!=-1){
	cout << b <<endl;
	break;
      }
    }
  }
}