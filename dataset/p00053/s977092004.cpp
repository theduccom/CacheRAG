#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

#define loop(i, a, b) for(long long int i = a; i < b; i++)
#define rep(i, a) loop(i, 0, a)
#define MAX (1000000)

int main()
{
  bool prime[MAX];
  rep(i, MAX) prime[i] = true;
  prime[0] = prime[1] = false;
  loop(i, 2, 10001){
    //	cout << i << endl;
    for(long long int j = i * 2; j < MAX; j += i)
      prime[j] = false;
  }

  int n;
  while(cin >>  n, n != 0){
    long long int ans = 0, cnt = n;
    rep(i, MAX)
      if(prime[i] == true) {
	//cout << i << endl;
	ans += i; cnt--;
	if(!cnt) break;
      }
    cout << ans << endl;
  }
  
}