#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    vector<int> cup(3, 0);
    cup[0] = 1;
    char a, c, b;
    while (cin >> a >> c >> b) {
        swap(cup[a-'A'], cup[b-'A']);
    }
    
    cout << (char)('A' + (find(cup.begin(), cup.end(), 1) - cup.begin())) << endl;
    return 0;
}