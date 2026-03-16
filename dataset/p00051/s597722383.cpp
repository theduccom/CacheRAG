#include<iostream>
#include<string>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
  string num;
  int tmp1[11111],tmp2[11111];
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> num;
    int x=0,y=0;
    for(int j=0;j<8;j++){
      tmp1[j] = num[j] - '0';
      tmp2[j] = num[j] - '0';
    }
    sort(tmp1,tmp1+8);
    sort(tmp2,tmp2+8,greater<int>());
    for(int j=0;j<8;j++){
      x *= 10;
      y *= 10;
      x += tmp1[j];
      y += tmp2[j];
    }
    cout << y-x << endl;
  }
}