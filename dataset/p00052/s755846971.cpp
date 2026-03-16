#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long n;
    while(1){
        cin >> n;
        if(n==0) break;
        long long ans = 0;  
        long long a = 5;
        while(a <= n){
            ans += n / a;
            a *= 5;
        }
        cout << ans << endl;
    }
	return 0;
}