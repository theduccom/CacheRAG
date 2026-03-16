#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main()
{
    int n;
    int five=5;
    int ans;
    while(cin >> n && n)
    {
        ans = 0;
        five = 5;
        while(n/five)
        {
            ans += n/five;
            five *= 5;
        }
        cout << ans << endl;
    }
}