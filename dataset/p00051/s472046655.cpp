#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

  string str;
  int n,a[100],b[100];

  cin >> n;

  for(int i=0;i<n;i++){
    cin >> str;
    int x = 0,y = 0;
    for(int i=0;i<str.size();i++){
      a[i] = str[i] - '0';
      b[i] = str[i] - '0';
    }

    sort(a,a+8);
    sort(b,b+8);
    reverse(b,b+8);

    for(int i=0;i<8;i++){
      x *= 10;
      y *= 10;
      x += a[i];
      y += b[i];
    }

    cout << y-x << endl;
  }
}