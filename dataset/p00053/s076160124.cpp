#include<iostream>
#include<vector>
using namespace std;
#define rep(i,a) for(int i = 0 ; i < a ; i ++)
#define loop(i,a,b) for(int i = a ; i < b ; i ++)
const int M = (1e6);
bool p[M];
vector<long long int>sum;
void isPrime(){
  rep(i,M)p[i] = true;
  p[0] = p[1] = false;
  
  sum.push_back(0);
  loop(i,2,M){
    if(p[i]){
      sum.push_back(sum[sum.size()-1]+i);
      
      for(int j = i + i ; j < M ; j += i)
	p[j] = false;
    }
  }
}
int main(void){
  isPrime();
  int n;
  while(cin>>n,n)cout<<sum[n]<<endl;
}