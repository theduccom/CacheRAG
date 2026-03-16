#include <iostream>

using namespace std;

int main(){
   double a;
   while(cin >> a){
      double s = a;
      for(int i=2;i<11;i++){
	 if (i % 2) a /= 3;
	 else  a *= 2;
	 s += a;
      }
      cout.precision(8);
      cout << fixed << s << endl;         
   }
   return 0;
}