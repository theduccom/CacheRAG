#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
using namespace std;

main(){
  int n,i,j;
  string a,str;
  while(cin >> a){

    for(i=0;i<101;i++){
      if(a[i] == '\0') break;

      else if(a[i] == '@'){
	str = a[i+1];
	n = atoi(str.c_str());
	for(j=0;j<n;j++){
	  cout << a[i+2];
	}
	i+=2;
      }

      else cout << a[i];
    }

    cout << endl;
  }
  return 0;
}