#include<iostream>

using namespace std;

int main(){
  int n, i;
  while(cin >> n, n != 0){
    //    cout << '!' << endl;
    int ice[10] = {};
    while(n--) {
      cin >> i;
      ice[i]++;
    }
    for(i = 0; i < 10; i++) {
      if(ice[i])
	while(ice[i]--) cout << '*';
      else cout << '-';
      cout << endl;
    }
  }
  return 0;
}
    