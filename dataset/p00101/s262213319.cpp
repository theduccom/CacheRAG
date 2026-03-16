#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){
  int n, i, s, g;
  string a;
  cin>>n;
  for(g=0; g < n;g++){
      getline(cin,a);
      if(a==""){
        g--; 
        continue;
      }
      for(i=6; i <= a.size();i++)
      if(a[i-6]== 'H' &&a[i-5]== 'o' &&a[i-4]== 's' &&a[i-3]== 'h' &&a[i-2]== 'i' &&a[i-1]== 'n' &&a[i]== 'o')
      a[i]='a';   
      cout<<a<<endl;
  } 
  return 0; 
}