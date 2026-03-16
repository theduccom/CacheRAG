#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  double angle=90,x=0,y=0,pi=3.141592653589793;
  int d,a;
  while(cin >> s){
    if(s=="0,0"){
      cout << (int)x << endl << (int)y << endl;
      return 0;
    }
    for(int i=0;i<s.size();i++){
      if(s[i]==','){
        string ss=s.substr(0,i),tt=s.substr(i+1,s.size()-i-1);
        d=atoi(ss.c_str()),a=atoi(tt.c_str());
      }
    }
    x+=cos(pi*(angle)/180)*(double)d;
    y+=sin(pi*(angle/180))*(double)d;
    angle-=(double)a;
  }
  return 0;
}

