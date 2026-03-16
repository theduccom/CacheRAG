#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;

int main(){
  int n;
  cin >> n;
  while(n--){
    string a,b; cin >> a >> b;
    if(a.size() > 80 || b.size() > 80){
      cout << "overflow" << endl;
      continue;
    }
    if(a.size() < b.size()) swap(a,b);
    for(int i=a.size()-1,j=b.size()-1;i>=0;i--,j--){
      if(j >= 0) a[i] += b[j]-'0';
      if(a[i] > '9'){
	a[i] -= 10;
	if(i == 0) a = "1" + a;
	else a[i-1]++;
      }
    }
    if(a.size() > 80) cout << "overflow" << endl;
    else cout << a << endl;
  }
}