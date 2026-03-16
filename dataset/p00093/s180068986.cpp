#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

#define loop(i, a, b) for(int i = a; i < b; i++)

int main()
{
  int a, b, c = 0;
  
  while(1) {
    cin >> a >> b;
    if(a == 0 && b == 0) break;
    if (c++)cout << endl;
    int cnt = 0;
    loop(i, a, b + 1) {
      if(i % 400 == 0) { cout << i << endl; cnt++; }
      else if(i % 100 && i % 4 == 0) { cout << i << endl; cnt++; }
    }
    if (!cnt)  cout << "NA" << endl;

  }
}