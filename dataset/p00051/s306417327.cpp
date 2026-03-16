#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(){
  int n;
  string s;
  int MS[10000];
  int MI[10000];
  int mmax,mmin;

  scanf("%d",&n);
  while(n-- > 0){
    cin >> s;
    for(int i=0;i<s.length();i++){
      MS[i] = MI[i] = s[i]-'0';
    }
    sort(MI,MI+s.length());
    sort(MS,MS+s.length(),greater<int>());
    mmax=mmin=0;
    for(int i=0;i<s.length();i++){
      mmax += MS[i]*pow(10,s.length()-i-1);
      mmin += MI[i]*pow(10,s.length()-i-1);
    }
    cout << mmax-mmin << endl;

  }
  return 0;
}