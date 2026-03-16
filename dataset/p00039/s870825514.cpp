#include<iostream>
#include<string>
using namespace std;

int main(){

  int ans;
  string s;
  int a,b;
  string d = "IVXLCDM";
  int k[] = {1,5,10,50,100,500,1000};

  while(cin >> s){
    ans = 0;

    for(int i=0;i<s.size();i++){
      
      a = b = 0;
      for(int j=0;j<7;j++){
	if(s[i] == d[j]) a = k[j];
	if(s[i+1] == d[j]) b = k[j];
      }

      if(a < b){
	ans += b - a;
	i++;
      }
      else ans += a;

    }
  
    cout << ans << endl;

  }
}