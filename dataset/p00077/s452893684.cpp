#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cassert>
#include <vector>
#include <string>
#include <cmath>
#include <map> 
using namespace std;
 
const int MAX= 10000100;

#define loop(i,a,b) for(int i = a ; i < b ; i ++)
#define rep(i,a) loop(i,0,a)
#define all(a) (a).begin(),(a).end()
#define ll long long int
#define gcd(a,b) __gcd(a,b)

int GCD(int a, int b) {if(!b) return a; return gcd(b, a%b);}
int lcm(int a, int b) {return a*b / gcd(a, b);}

int main(void){
  string str;
  while(cin>>str){
    if(cin.eof())break;
    for(int i = 0 ; i < str.size() ; i ++){
      if(str[i] == '@'){
        int re = str[++i] - '0';
        i++;
        rep(j,re){
          cout<<str[i];
        }
        continue;
      }
      cout<<str[i];
    }
    cout<<endl;
  }	
}