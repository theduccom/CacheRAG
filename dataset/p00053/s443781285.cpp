


#include<iostream>
#include<utility>
using namespace std;

typedef struct {
  int back;
  int next;
} list;

int main(){
  int  p, k, n;
  long long j;
  list l[104731];
  for(k = 2; k < 104731; k++) {
    l[k].back = k-1;
    l[k].next = k+1;
  }
  for(p = 2; p < 104730;p = l[p].next)
    {
      for(k = p; k < 104730; k = l[k].next)
	{
	  for(j = (long long)k * p; j < 104730; j*= p)
	    {
	      l[l[j].back].next = l[j].next;
	      l[l[j].next].back = l[j].back;
	    }
	}
    }
  while(cin >> n && n)
    {
      j = 0;
      for(p = 2; n > 0; n--)
	{
	  j += p;
	  p = l[p].next;
	}
      cout << j << endl;
    }
  return 0;
}