#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void sum (string &sum, string& a, string& b);

int main(){
  string a1, a2;
  int n, A1, A2;

  cin >> n;
  for(int i = 0; i < n ; i++){
    string sum0 = "";
    cin >> a1 >> a2;
    reverse(a1.begin(), a1.end());
    reverse(a2.begin(), a2.end());
    A1 = a1.length();
    A2 = a2.length();
    if(A1 < A2) {
      swap (A1, A2);
      swap (a1, a2);
    }

    for(int i = 0; i < A1 - A2; i++)   a2 += '0';

    sum(sum0, a1, a2);

    if (sum0.length() > 80) sum0 = "overflow";
    else  reverse(sum0.begin(), sum0.end());
    
    cout << sum0 << endl;
  }
}

void sum(string& buff, string& a, string& b){
  //string buff = "";
  int x = 0, y ;
  for(int i = 0; i < a.length(); i++){
    y = a[i] - '0' + b[i] - '0';
    if (y + x > 9){
      buff += (y + x)% 10 + '0';
      x = 1;
    } else {
      buff += y + x + '0';
      x = 0;
    }
  }
  if (x==1) buff += '1';
  //return &buff;
}

    