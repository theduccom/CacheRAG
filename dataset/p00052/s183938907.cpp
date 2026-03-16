#include <iostream>
using namespace std;

int main()
{
    long long int n;
    int ans;
    while(cin >> n,n){
        ans = 0;
        while(n){
            ans += n / 5;
            n /= 5;
        }
        cout << ans << endl;
    }
}