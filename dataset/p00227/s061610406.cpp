#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

int main()
{
  while(true){
    int n,m;
    int res = 0;
    scanf("%d%d", &n, &m);
    if(n == 0 && m == 0 )break;
    vector<int> p;
    for(int i = 0; i < n; ++i){
      int t; scanf("%d", &t); p.push_back(t);
    }
    sort(p.begin(),p.end(),greater<int>() );
    int s=0;
    for(int i = 0; i < n; ++i){
      if((i+1)%m==0){
	//cout << " s = " << s << endl;
	res += s;
	s=0;
	continue;
      }
      s+=p[i];
    }
    res += s;
    printf("%d\n", res);
  }
  return 0;
}