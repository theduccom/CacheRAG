#include <cstdio>
#include <iostream>
using namespace std;
int main (int argc, char const* argv[]) {
  int price, sum_price=0, num, sum_num=0, count=0;
  while (EOF != scanf("%d,%d",&price,&num)) {
    sum_num += num;
    sum_price += price * num;
    count++;
  }
  double avg = (double)sum_num / count;
  cout<<sum_price<<endl;
  for (int i = 0;; i += 1) {
    if (i > avg) {
      cout<<i<<endl;
      break;
    }
  }
  return 0;
}