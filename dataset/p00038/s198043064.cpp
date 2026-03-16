#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  vector<int> c(5);
  int ans;
  while(~scanf("%d,%d,%d,%d,%d", &c[0],&c[1],&c[2],&c[3],&c[4])) {
    sort(c.begin(), c.begin()+5);
    if(c[0] == c[3] || c[1] == c[4]) ans = 7;
    else if((c[0] == c[2] && c[3] == c[4])|| (c[0] == c[1] && c[2] == c[4])) ans = 6;
    else if(c[0] + 1 == c[1] && c[1] + 1 == c[2] && c[2] + 1 == c[3] && c[3] +1 == c[4])
      ans = 5;
    else if(c[0] == 1 && c[1] == 10 && c[2] == 11 && c[3] == 12 && c[4] == 13)
      ans = 5;
    else if(c[0] == c[2] || c[1] == c[3] || c[2] == c[4])
      ans = 4;
    else if((c[0] == c[1] && c[2] == c[3]) || (c[0] == c[1] && c[3] == c[4]) || (c[1] == c[2] && c[3] == c[4]))
      ans = 3;
    else if(c[0] == c[1] || c[1] == c[2] || c[2] == c[3] || c[3] == c[4])
      ans = 2;
    else ans= 1;
    switch(ans) {
    case 1: cout << "null" << endl; break;
    case 2: cout << "one pair" << endl; break;
    case 3: cout << "two pair" << endl; break;
    case 4: cout << "three card" << endl; break;
    case 5: cout << "straight" << endl; break;
    case 6: cout << "full house" << endl; break;
    case 7: cout << "four card" << endl; break;
    }
  }
  return 0;
}