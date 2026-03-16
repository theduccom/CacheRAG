#include <iostream>
using namespace std;

int y[3001];

int main()
{
  for (int i = 4; i <= 3000; i += 4){
    y[i] = 1;
  }
  for (int i = 100; i <= 3000; i += 100){
    y[i] = 0;
  }
  for (int i = 400; i <= 3000; i += 400){
    y[i] = 1;
  }
  
  int a, b;
  cin >> a >> b;
  if (a == 0){
    return 0;
  }
  int c = 0;
  for (int i = a; i <= b; i++){
    if (y[i] == 1){
      cout << i << endl;
      c = 1;
    }
  }

  while (1){
    cin >> a >> b;
    if (a == 0){
      break;
    }
    c = 0;
    cout << endl;
    for (int i = a; i <= b; i++){
      if (y[i] == 1){
        cout << i << endl;
        c = 1;
      }
    }
    if (c == 0){
      cout << "NA" << endl;
    }
  }
  
  return 0;
}