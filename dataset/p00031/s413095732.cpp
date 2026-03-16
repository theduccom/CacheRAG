#include <iostream>
using namespace std;

void dfs(int cw, int remain)
{
  if (!cw || !remain)
    return;

  if (remain >= cw) {
    dfs(cw/2, remain-cw);
    if (remain != cw)
      cout << " ";
    cout << cw;
  } else {
    dfs(cw/2, remain);
  }
}

int main(int argc, char **argv)
{
  int x;

  for (;;) {
    cin >> x;
    if (cin.eof())
      break;
    dfs(512, x);
    cout << endl;
  }
  return 0;
}