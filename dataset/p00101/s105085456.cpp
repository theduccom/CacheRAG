#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;
#define INF 100000000
#define SIZE 6 // Hoshinaの文字数-1
typedef long long ll;

int main(void) {
    int n;
    scanf(" %d ", &n);
    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        while (1) {
            string::size_type index = s.find("Hoshino");
            if (index == string::npos) break;
            else s[index + SIZE] = 'a';
        }
        cout << s << endl;
    }
    return 0;
}