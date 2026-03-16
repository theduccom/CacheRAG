#include <iostream>
using namespace std;

int main()
{
  int n;
  string str;

  cin >> n;
  while (n--){
    int res = 0, o_ct = 0, ct = 0;
    while (true){
      cin >> str;
      if (str == "OUT"){
        o_ct++;
        if (o_ct == 3)  break;
      }
      else if (str == "HOMERUN"){
          res += ct + 1;
          ct = 0;
      }
      else {
        if (ct + 1 == 4)  res++;
        else ct++;
      }
    }
    cout << res << endl;
  }
}