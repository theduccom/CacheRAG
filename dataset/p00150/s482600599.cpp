#include <iostream>
#include <cmath>
#include <map>

using namespace std;


bool isPrime(int x) {
  if(x == 1) return false;
  if(x == 2) return true;
  if(x % 2 == 0) return false;
  int max = (int)sqrt(x);

  for(int i = 3; i <= max; i += 2) {
    if(x % i == 0) return false;
  }
  return true;
}

int main() {
  int data[10000];
  map<int, int> from;
  int index = 0;
  for(int i = 2; i <= 10000; i++) {
    if(isPrime(i)) {
      data[index] = i;
      from[i] = index;
      index++;
    }
  }

  while(1) {
    int n;
    cin >> n;
    if(n == 0) break;

    for(int i = n; i >= 0; i--) {
      if(isPrime(i)) {
	for(int j = from[i]; j-1 >= 0; j--) {
	  if(data[j] - data[j-1] == 2) {
	    cout << data[j-1] << ' ' << data[j] << endl;
	    break;
	  }
	}
	break;
      }
    }
  }
  return 0;
}