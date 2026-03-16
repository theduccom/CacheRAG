#include <iostream>
#include <complex>
using namespace std;

#define P complex<double>

int main(){
  int n, ans;
  P a,b, z;
  double ra, rb, d;

  cin >> n;
  for( int loop=0;loop<n;loop++ ){
    cin >> a.real() >> a.imag() >> ra;
    cin >> b.real() >> b.imag() >> rb;
    /*
    cout << "a=" << a << " ra=" << ra << endl;
    cout << "b=" << b << " rb=" << rb << endl;
    */
    z = a-b;
    d=abs(z);
    //    cout << "d=" << d << endl;

    if( ra+rb < d ) // dÈÁÄ¢È¢
      ans = 0;
    else  if( ra > d + rb ){ // a ÌÉ b
      ans = 2;
    }else if( rb > d + ra ){ // b ÌÉ a
      ans = -2;
    }else 
      ans = 1; 

    cout << ans << endl;
  }
  return 0;
} 