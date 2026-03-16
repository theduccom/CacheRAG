#include <iostream>
#include <algorithm>

#define N 1000001

using namespace std;

bool prm[N];
void mkPrm()
{
  fill(prm, prm+N, true);
  prm[0] = prm[1] = false;

  for(int i = 2; i < N; i++)
    if(prm[i])
      for(int j = i+i; j < N; j+=i) prm[j] = false;

  return ;
}

int main()
{
  int n, x, a[30];
  bool val[N];

  mkPrm();
  while(cin>>n>>x && (n+x)){
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    fill(val, val+N, false);
    val[0] = true;

    for(int i = 0; i <= x; i++)
      if(val[i])
	for(int j = 0; j < n; j++)
	  if(i+a[j] <= x) val[i+a[j]] = true;

    n = 0;
    for(int i = x; i > 1; i--)
      if(val[i] && prm[i]){
	n = i;
	break;
      }

    if(n) cout << n << endl;
    else cout << "NA" << endl;
  }

  return 0;
}