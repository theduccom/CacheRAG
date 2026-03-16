#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<algorithm>
typedef unsigned long long ull;
#define rep(i,a) for(int i=0;i<a;i++)
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
const double eps = 1e-10;
const double pi = acos(-1);
const double inf = (int)1e8;

int main(void){
  int ball[3] = {1,0,0};
  string str;
  while(getline(cin,str)){
    swap(ball[str[0]-'A'],ball[str[2]-'A']);
  }
  rep(i,3)if(ball[i])cout<<(char)(i+'A')<<endl;
  return 0;
}