#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main(){
  int n;
  char a[101];
  char b[101];
  int temp;
  int p = 0;
  int i;
  int flag;
  cin >> n;
  while(p < n){
    flag = 0;
    for(i = 0;i < 101;i++){
      a[i] = '0';
      b[i] = '0';
    }
    scanf("%s %s",a,b);
    temp = 100;
    for(i = strlen(a) - 1;i >= 0;i--){
      a[temp] = a[i];
      a[i] = '0';
      temp--;
    }
    temp = 100;
    for(i = strlen(b) - 1;i >= 0;i--){
      b[temp] = b[i];
      b[i] = '0';
      temp--;
    }
    for(i = 100;i >= 0;i--){
      a[i] += b[i] - '0';
      if(a[i] > '9'){
	a[i - 1]++;
	a[i] -= 10;
      }
    }
    for(i = 0;i < 101;i++){
      if(a[i] >= '1'){
	if(i <= 20){
	  cout << "overflow";
	  break;
	}
	flag = 1;
      }
      if(flag || i == 100){
	cout << a[i];
      }
    }
    cout << endl;
    p++;
  }
  return(0);
}