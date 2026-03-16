#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

#define reps(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reps(i,0,n)

int main()
{
    string str;
    getline(cin, str);
    cout << (str == "1 1 0" || str == "0 0 1" ? "Open" : "Close") << endl;
}