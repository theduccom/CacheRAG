#include<iostream>
#include<vector>
#define N 300000
using namespace std;


bool p[N];
int num[N];

int main(){

  for(int i=0;i<N;i++)p[i] = true;
  p[0] = p[1] = false;

  for(int i=2;i*i<N;i++){
    if(p[i]){
      for(int j=2*i;j<N;j+=i)p[j] = false;
    }
  }

  vector<int> v;
  int sum = 0,pos = 0;
  while(v.size()<10000){
    if(p[pos]){
      sum += pos;
      v.push_back(sum);
    }
    pos++;
  }

  int n;
  while(cin >> n ,n)cout << v[n-1] << endl;
  
}