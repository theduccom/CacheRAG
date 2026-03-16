#include <iostream>
#include <math.h> 
using namespace std;

bool IsPrime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
      {
        if (num % i == 0)
	  {
            // 素数ではない
            return false;
	  }
      }

    // 素数である
    return true;
}

int main(void){

  int n;
  int max_prime;
  int min_prime;

  while(cin >> n){
 
    for(int i=n-1;i>1;i--){
      if(IsPrime(i)){
	max_prime=i;
	break;
      }
    }

    for(int j=n+1;j<100000;j++){
      if(IsPrime(j)){
	min_prime=j;
	break;
      }
    }

    cout << max_prime << " " << min_prime << endl;

  }
  
  return 0;
}


