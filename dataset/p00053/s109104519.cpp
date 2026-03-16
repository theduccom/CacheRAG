#include <iostream>
#include <cmath>
#include <numeric>
#define MAX 10000
using namespace std;

/*-- ref. Volume0/0009_PrimeNumber --*/
bool isPrime(int x) {
  if(x == 2) {
	return true;
  }
  
  if(x < 2 || x % 2 == 0) {
	return false;
  }
  for(int i = 3; i <= sqrt(x); i += 2) {
	if(x % i == 0) {
	  return false;
	}
  }
  return true;
}

int main() {
  int pn[MAX] = {};
  int n, i =1, j = 0;

  while(j < MAX) {
	if(isPrime(i)) {
	  pn[j] = i;
	  j++;
	}
	i++;
  }
  
  while(cin >> n) {
	if(n == 0) break;
	cout << accumulate(&pn[0], &pn[n], 0) << endl;
  }
  /*
  for(int k = 0; k < MAX; ++k) {
	cout << pn[k];
	cout << (k < 9999 ? " " : "\n");
  }
  */

  return 0;
}