#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;
#define tr(c, i) for(auto i = (c).begin(); i != (c).end(); i++)
#define rep(i,n) for(int i=0;i<n;i++)

int main(int argc, char **argv)
{
  vi l(10,0), v(2,0);
  char c;
  int total;
  for (;;) {
    rep (i, 10) {
      cin >> l[i];
      cin >> c;
    }
    cin >> v[0] >> c >> v[1];
    if (cin.eof())
      break;

    total = 0;
    tr (l, i) {
      *i = *i * (v[0]+v[1]);
      total += *i;
    }
    int time = total / (v[0]+v[1]);
    int i = 0;
    int d = 0;
    for (; d < time*v[0]; d += l[i++])
      ;
    cout << i << endl;
  }
  return 0;
}