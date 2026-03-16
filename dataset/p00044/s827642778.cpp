#include<iostream>
using namespace std;
#define rep(i,a) for(int i = 0 ; i < a ; i ++)
#define loop(i,a,b) for(int i = a ; i < b ; i ++)
const int M = (1e6);
int p[M];
void isPrime(){
  rep(i,M)p[i] = true;
  p[0] = p[1] = false;
  loop(i,2,M){
    if(p[i])
      for(int j = i + i ; j < M ; j += i)
	p[j] = false;
  }
}
int main(void){
  isPrime();
  int n;
  while(cin>>n){
    int i = n - 1;
    while(!p[i--]);cout<<++i<<" ";
    i = n + 1;
    while(!p[i++]);cout<<--i<<endl;
  }
}