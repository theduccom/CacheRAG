#include<iostream>
#include<vector>
#include<cmath>
#include<map>
#include<cstdio>
using namespace std;
#define rep(i,a) for(int i = 0 ; i < a; i ++)
#define loop(i,b,a) for(int i = b ; i < a; i ++)
const int MAX = (1e6);
bool p[MAX];
void isPrime(){
  fill(p,p + MAX,true);
  p[0] = p[1] = false;
  rep(i,MAX){
    if(p[i]){
      for(int j = i + i ; j < MAX ; j += i)
    p[j] = false;
    }
  }
} 
 
int main(void){
  isPrime();
  int n;
  while(cin>>n){
  int i = n-1;
  while(!p[i--]);
  cout<<++i<<' ';
  i = n + 1;
  while(!p[i++]);
  cout<<--i<<endl;
  }
  return 0;
}