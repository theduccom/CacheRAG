#include <iostream>

using namespace std;

int main()
{
  const int lastBill = 4280;
  const int basicBill = 1150;
  int bill;
  int w;
  
  while (1) {
    cin >> w;
    if (w == -1) break;
    if (w <= 10) {
      bill = basicBill;
    } else if (w <= 20) {
      bill = basicBill + (w - 10) * 125;
    } else if (w <= 30) {
      bill = basicBill + 1250 + (w - 20) * 140;
    } else {
      bill = basicBill + 1250 + 1400 + (w - 30) * 160;
    }

    cout << lastBill - bill << endl;
  }
}
    

