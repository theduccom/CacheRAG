#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)

int main()
{
  char s1, s2;
  map<char, int> cup;
  cup['A'] = 1, cup['B'] = 0, cup['C'] = 0;
  while (scanf("%c,%c", &s1, &s2) != EOF){
    swap(cup[s1], cup[s2]);
  }
  if (cup['A']) cout << "A" << endl;
  if (cup['B']) cout << "B" << endl;
  if (cup['C']) cout << "C" << endl;
}