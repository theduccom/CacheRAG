#include <iostream>
#include <algorithm>

using namespace std;

int dif(int a){
  int n[20],dig,b=0;
    for(dig = 0;a>0;a/=10,dig++)
      n[dig] = a%10;
    sort(n,n+dig);
    for(int j=dig-1;j>=0;j--){
      b *= 10;
      b += n[j]%10;
    }
    reverse(n,n+dig);
    for(int j=dig-1;j>=0;j--){
      a *= 10;
      a += n[j]%10;
    }
    return b-a;
}

int main(){
  int a,n;
  for(cin>>n;n>0;n--){
  cin >> a;
  cout << dif(a) << endl;
  }
  return 0;
}