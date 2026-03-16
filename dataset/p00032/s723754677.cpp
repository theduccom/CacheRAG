#include <iostream>
using namespace std;
int main(){
    int c = 0, h = 0;
    int s1, s2, t;
    char a, b;
    while(cin >> s1 >> a >> s2 >> b >> t)
    {
        if(((s1 * s1) + (s2 * s2)) == t * t) c++;
        if(s1 == s2) h++;
    }
    cout << c << endl;
    cout << h << endl;
    return 0;
}