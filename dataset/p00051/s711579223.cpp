#include<bits/stdc++.h>
using namespace std;

int Convert(string s){

  int sum=0;

  for(int i=(int)s.size()-1; i>=0; i--){
    sum += (s[i]-'0')*pow(10,s.size()-1-i);
  }
  return sum;
}

int main(){

  string s;
  int tmp;
  int n;

  cin>>n;

  for(int i=0; i<n; i++){
    cin >> s;
    sort(s.begin(),s.end());
    tmp = Convert(s);
    reverse(s.begin(),s.end());
    cout << Convert(s)-tmp << endl;
  }
  

  return 0;
}