#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{
    int m, n;
    while(cin >> n >> m && n && m) {
        vector<int> p(n);
        for(int i = 0; i < n; i++)
            cin >> p[i];
        
        sort(p.begin(), p.end(), greater<int>());
        
        int sum = 0;
        for(int i = 0; i < n; i++) 
            if(i / m == n / m || i % m != m - 1)
                sum += p[i];
        cout << sum << endl;
    }
}