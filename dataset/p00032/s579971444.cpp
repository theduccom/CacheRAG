#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  int a[3];
  int rect=0,hisi=0;
  while(cin>>str){
    stringstream ss(str);
    string buf;
    int i=0;
    while(getline(ss,buf,',')){
      a[i]= (buf[0]-'0');
      i++;
    }
    if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]) rect++;
    else if(a[0]==a[1]) hisi++;
  }

  cout << rect << endl << hisi << endl;

}