#include<iostream>
using namespace std;
int main(){
  int n;
  cin >>n;
  while(n--){
    string a,b,solve = "";
    cin >>a>>b;
    int as = a.size(),bs = b.size(),ms;
    int j=0,k;
    ms = (as<bs)?bs:as;
    for(int i=0; i<ms; i++){
      if(i<as && i<bs) k = a[as-i-1]+b[bs-i-1]-'0'*2+j;
      else if(i<as) k = a[as-i-1]-'0'+j;
      else if(i<bs) k = b[bs-i-1]-'0'+j;
      j = k/10;
      solve+='0'+k%10;
    }
    if(j!=0) solve+='1';
    if(solve.size()>80) cout <<"overflow"<<endl;
    else{
      for(int i=solve.size()-1; i>=0; i--)
	cout <<solve[i];
      cout <<endl;
    }
  }
  return 0;
}