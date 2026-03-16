#include <cstdio>
#include <cstring>
const int MAX = 100000;
bool isPrime[MAX];

int main(void) {
  
  for(int i = 0 ; i < MAX ; i++)
    isPrime[i] = true;
  
  isPrime[0] = isPrime[1] = false;
  
  for(int i = 0 ; i < MAX ; i++)
    if(isPrime[i] == true)
      for(int j = i + i ; j < MAX ; j += i)
	isPrime[j] = false;
  
  int input;
  while(scanf("%d", &input) != EOF) {
    for(int i = input - 1 ; i > 0 ; i--)
      if(isPrime[i] == true) { printf("%d ", i); break; }
    
    for(int i = input + 1 ; i < MAX ; i++)
      if(isPrime[i] == true){ printf("%d\n", i); break; }
  } 
  return 0;
}