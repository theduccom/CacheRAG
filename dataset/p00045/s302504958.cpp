#include<iostream>
#include<iomanip>
#include<vector>
#include<queue>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<memory>

using namespace std;

int main()
{
  int p, n, tp = 0, tn = 0, c = 0;
  char d;

  while ( cin >> p >> d >> n )
    {
      tp += p * n;
      tn += n;
      ++c;
    }

  cout << tp << endl;
  cout << round( (double)tn / (double)c) << endl;
  
  return 0;
}