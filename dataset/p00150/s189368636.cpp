#include <iostream>
using namespace std;
bool a[10001];
int main()
{
  int i,j;
  for(i=2;i<10001;i++){
    if(!a[i]){
      for(j=2;i*j<10001;j++){
	a[i*j] = true;
      }
    }
  }
  for(;;){
    cin >> i;
    if(i==0) break;
    if(i%2 == 0) i--;
    while(i > 4){
      if(a[i] == false && a[i-2] == false) break;
      i -= 2;
    }
    cout << (i-2) << " " << i << endl;
  }
  return 0;
}