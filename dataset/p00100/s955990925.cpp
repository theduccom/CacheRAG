#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

struct data{
  int a;
  long long total;
};

int main(){
  int i,j,n,c,a,yen,ko,f,f2;
  data d[4000];
  while(1){
    cin >> n;
    if(n == 0) break;
    c = 0;
    for(i=0;i<n;i++){
      cin >> a >> yen >> ko;
      f = 1;
      for(j=0;j<c;j++){
	if(a == d[j].a){
	  d[j].total += (long long) yen * ko;
	  f = 0;
	  break;
	}
      }
      if(f){
	d[c].a = a;
	d[c].total = (long long)yen * ko;
	c++;
      }
    }

    f2 = 1;
    for(i=0;i<c;i++){
      if(d[i].total >= 1000000){
	cout << d[i].a << endl;
	f2 = 0;
      }
    }
    if(f2) cout << "NA" << endl;

  }
  return 0;
}