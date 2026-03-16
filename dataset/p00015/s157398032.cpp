#include <iostream>
#include <string>

using namespace std;

string reverse(const string& str){
  string ret;
  string::const_reverse_iterator it = str.rbegin();
  for(; it != str.rend(); it++) {
    ret.push_back(*it);
  }
  return ret;
}

void cut0(string& str){
  while(str[str.size() - 1] == '0' && str.size() > 1){
    str.erase(str.size() - 1);
  }
}

int main () {
  int n;
  string a, b, sum;
  
  cin >> n;
  while(n--) {
    bool overflow = false;

    cin >> a >> b;
    if (a.size () > 80 || b.size() > 80) {
      cout << "overflow" << endl;
      continue;
    }

    a = reverse(a);
    b = reverse(b);
    a.resize(80, '0');
    b.resize(80, '0');
    sum.clear();
    sum.resize(80, '0');
    
    for(size_t i = 0; i < 80; i++) {
      sum[i] += a[i] - '0' + b[i] - '0';
      if(sum[i] > '9'){
        sum[i] -= 10;
        if(i < 79) {
          sum[i+1] = '1';
        }
        else {
          overflow = true;
          break;
        }
      }
    }
    if(overflow){
      cout << "overflow" << endl;
    }
    else {
      cut0(sum);
      cout << reverse(sum) << endl;
    }
  }
}