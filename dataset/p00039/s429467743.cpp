#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int dight(int n){
  return n==0?1:int(log10(n))+1;
}
int dif(int a,int b){
  if(a<b) return b-a;
  else return a+b;
}
int m(char c){
  if(c=='I') return 1;
  else if(c=='V') return 5;
  else if(c=='X') return 10;
  else if(c=='L') return 50;
  else if(c=='C') return 100;
  else if(c=='D') return 500;
  else return 1000;
}
int main(){
  string s;
  while(cin>>s){
    int ans = 0,a[100],count=0;
    a[0] = m(s[0]);
    for(int i=1;i<s.size();i++){
      if(s[i]==s[i-1]) a[count] += m(s[i]);
      else{
	count++;
	a[count] = m(s[i]);
      }
    }
    if(count==0) ans = a[0];
    for(int i=1;i<=count;i++){
      if(a[i-1]>a[i]&&dight(a[i-1])>dight(a[i])){
	ans += a[i-1];
	if(i==count) ans += a[i];
      }
      else{
	ans += dif(a[i-1],a[i]);
	if(i+1==count) ans += a[i];
	i++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}