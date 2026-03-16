#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
#define int long long
signed main(){
        char buf[256];
        while ( fgets(buf, 256, stdin) != NULL ) {
                string str(buf);
                transform(str.cbegin(), str.cend(), str.begin(), ::toupper);
                cout << str;
        }
        return 0;
}