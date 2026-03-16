#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cmath>
#include<ctime>
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
char m[10][10];
int main(void){
  while(cin >> m[1][1]){
    for(int i=1;i<=8;i++){
      for(int j=1;j<=8;j++){
	if(i!=1 || j!=1)scanf(" %c",&m[i][j]);
      }
    }
    bool f=true;
    for(int i=1;i<=8 && f;i++){
      for(int j=1;j<=8 && f;j++){
	if(m[i][j]=='1'){
	  if(m[i+1][j]=='1' && m[i][j+1]=='1' && m[i+1][j+1]=='1'){
	    puts("A");
	    f=false;
	  }
	  else if(m[i+1][j]=='1' && m[i+2][j]=='1' && m[i+3][j]=='1'){
	    puts("B");
	    f=false;
	  }
	  else if(m[i][j+1]=='1' && m[i][j+2]=='1' && m[i][j+3]=='1'){
	    puts("C");
	    f=false;
	  }
	  else if(m[i+1][j]=='1' && m[i+1][j-1]=='1' && m[i+2][j-1]=='1'){
	    puts("D");
	    f=false;
	  }
	  else if(m[i][j+1]=='1' && m[i+1][j+1]=='1' && m[i+1][j+2]=='1'){
	    puts("E");
	    f=false;
	  }
	  else if(m[i+1][j]=='1' && m[i+1][j+1]=='1' && m[i+2][j+1]=='1'){
	    puts("F");
	    f=false;
	  }
	  else if(m[i][j+1]=='1' && m[i+1][j]=='1' && m[i+1][j-1]=='1'){
	    puts("G");
	    f=false;
	  }
	}
      }
    }
  }
}