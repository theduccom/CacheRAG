#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

void func(int a[]){
  sort(a,a+5);
  int cnt = 1;
  for(int i = 1 ; i < 5 ; i++){
    if(a[1] == 10 && i == 4){
      if(a[0] == 1 && a[4] == 13)cnt++;
    }
    if(a[i-1]+1 == a[i])cnt++;
  }
  if(cnt == 5){
    cout << "straight" << endl;
    return;
  }
  
  int c[14];
  int two,three,four;
  two = three = four = 0;
  for(int i = 0 ; i < 14 ; i++)c[i] = 0;
  for(int i = 0 ; i < 5 ; i++)c[a[i]]++;
  for(int i = 0 ; i < 14 ; i++){
    if(c[i] == 4)four++;
    else if(c[i] == 3)three++;
    else if(c[i] == 2)two++;
  }
  
  if(four == 1){
    cout << "four card" << endl;
    return;
  }
  else if(two == 1 && three == 1){
    cout << "full house" << endl;
    return;
  }
  else if(two == 2){
    cout << "two pair" << endl;
    return;
  }
  else if(two == 1){
    cout << "one pair" << endl;
    return;
  }
  else if(three == 1){
    cout << "three card" << endl;
    return;
  }
  cout << "null" << endl;
}
    

int main(){
  int a[5];
  while(scanf("%d,%d,%d,%d,%d",&a[0],&a[1],&a[2],&a[3],&a[4]) != EOF){
    func(a);
  }
  return 0;
}