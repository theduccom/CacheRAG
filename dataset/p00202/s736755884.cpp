#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
#define MAX 2000000
using namespace std;

const int INF = 1<<29;
bool isPrime[MAX+5],dp[MAX+5];

void Init(){
  for(int i=0;i<=MAX;i++)isPrime[i] = false;
  for(int i=3;i<=MAX;i+=2)isPrime[i] = true;
  isPrime[2] = true;
  int limit = (int)sqrt((double)MAX)+1;
  for(int i=3;i<=limit;i+=2){
    if(!isPrime[i])continue;
    for(int j=i+i;j<=MAX;j+=i)isPrime[j] = false;
  }
}


int main(){
  int n,x,val;
  vector<int> The_rock;
  Init();
  while(cin >> n >> x && n && x){
    The_rock.clear();
    for(int i=0;i<n;i++){
      cin >> val;
      The_rock.push_back(val);
    }
    //int dp[x+10];
  
    for(int i=0;i<=MAX;i++)dp[i] = false;
    
    for(int i=0;i<The_rock.size();i++)dp[The_rock[i]] = true;
    dp[0] = true;
    for(int i=0;i<The_rock.size();i++){
      for(int j=The_rock[i];j<=MAX;j++){
	if(dp[j-The_rock[i]])dp[j] = true;
      }
    }

    bool fin = false;
    for(int i=x;i>=2;i--){
      if(isPrime[i] && dp[i]){
	cout << i << endl;
	fin = true;
	break;
      }
    }
    if(!fin)cout << "NA" << endl;


  }
  return 0;
}