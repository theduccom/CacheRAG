#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long double a,ans;
    
    while(cin >> a){
        ans = a;
        for(int i = 1; i < 10; ++i){
            if(i % 2){
                a *= 2;
            } else {
                a /= 3;
            }
            ans += a;
        }
        cout << setprecision(10) << ans << endl;
    }

}