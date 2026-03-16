#include<iostream>
#include<cmath>
#include<vector>
#include<string>
typedef unsigned long long ull;
#define rep(i,a) for(int i=0;i<a;i++)
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
const double eps = 1e-10;
const double pi = acos(-1);
const double inf = (int)1e8;

void solved(){
  string s;
  getline(cin,s);
  string w[] = {"apple","peach"};
  
  rep(i,s.size()-5+1){
        string ss=s.substr(i,5);
        if(ss==w[0])s.replace(i,5,w[1]);
        else if(ss==w[1])s.replace(i,5,w[0]);
    }

  cout<<s<<endl;
}

int main(void){
  solved();
  return 0;
}