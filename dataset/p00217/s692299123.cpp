#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef pair<int, int> P;

int main()
{
    int n,p,d1,d2;
    while(cin >> n && n) {
        vector<P> v(n);
        for(int i = 0; i < n; i++) {
            cin >> p >> d1 >> d2;
            v[i] = P(d1 + d2, p);
        }
        
        sort(v.begin(), v.end());
        cout << v[n-1].second << " " <<  v[n-1].first << endl;
    }
}