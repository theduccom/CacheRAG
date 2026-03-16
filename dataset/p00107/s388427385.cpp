#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;
#define mp(a,b) make_pair(a,b)
#define fr first
#define sc second
typedef pair<string,int> Pi;
int main(){
  int d[4],n,r;
  while(cin >> d[0] >> d[1] >> d[2] , d[0]){
    cin >> n;
    sort(d,d+3);
    int ans = d[0] * d[0] + d[1] * d[1];
    while(n--){
      cin >> r;
      cout << (r * r * 4 > ans ? "OK" : "NA") << endl;
    }
  }
}