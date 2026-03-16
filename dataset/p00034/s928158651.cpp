#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;

#define REP(i,n) for(int i=0; i<n; i++)

int main()
{
  int l[10];
  int v1,v2;
  char del;

  while(true){

    REP(i,10){
      cin >> l[i] >> del;
    }
    if(!(cin >> v1 >> del >> v2))
      break;

    int sum=0;
    REP(i,10) sum += l[i];

    double t = (double)sum / (v1+v2);
    double len = t * v1;

    int tmp=0;
    int res=0;
    REP(i,10){
      tmp += l[i];
      if(tmp >= len){
	res = i+1;
	break;
      }
    }

    cout << res << endl;
  }

  return 0;
}