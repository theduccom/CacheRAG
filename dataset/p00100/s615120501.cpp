#include <iostream>
using namespace std;

int main() {
  long long int n,ID,price,quantity,sales[4001] = {0},check,k,kaburi,rep[4001];
  while(cin >> n) {
    long long int sales[4001] = {0};
    if(n == 0) break;
    check = 0;k=0;
    for(int i=0;i<n;i++) {
      cin >> ID >> price >> quantity;
      //      cout << ID << " " << price << " " << quantity << endl;
      sales[ID] += price * quantity;
      kaburi = 0;
      for(int j=0;j<k;j++) {
        if(rep[j] == ID) {
          kaburi = 1;
        }
      }
      if((sales[ID] >= 1000000) && (kaburi == 0)){
        cout << ID << endl;
        check = 1;
        rep[k] = ID;
        k++;
      }
    }
    if(check == 0)
      cout << "NA" << endl;
  }
}