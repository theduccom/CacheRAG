#include<iostream>
#include<string>
#include<algorithm> 
#include<functional>

using namespace std;

int Atoi(const string);

int main(){
  int i, x, m, n, ans;
  string str1, str2;

  cin >> x;

  for(i=0; i<x; i++){
    cin >> str1;
    str2 = str1;

    sort(str1.begin(), str1.end());
    m = Atoi(str1);
    sort(str2.begin(), str2.end(), greater<int>());
    n = Atoi(str2);

    ans = n - m;
    cout << ans << endl;
  }

  return 0;
}

int Atoi(const string c){
  int i, x=0, digit=1;

  for(i = c.size()-1; i >= 0; --i){
    x = x + (c[i] - 48) * digit;
    digit *= 10;
  }
  return x;
}