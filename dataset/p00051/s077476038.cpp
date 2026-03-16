#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  char buff[10];
  scanf("%d",&n);
  for(int cas=0;cas<n;cas++){
    cin >> buff;
    sort(buff,buff+8);
    //cout << buff << endl;
    int maxs,mins;
    maxs = mins = 0;
    for(int i=0;i<8;i++){
      maxs*= 10;
      mins*= 10;
      maxs+= buff[7-i];
      mins+= buff[i];
    }
    cout << maxs-mins << endl;
  }
  return 0;
}