#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

#define REP(i, n)       REPEAT(i, 0, n)
#define REPEAT(i, k, n) for (int i = (k); i < (n); ++i)
#define ESIZEOF(A)      (sizeof(A)/sizeof((A)[0]))

int k[4];
int main(){
    string s;
    while(getline(cin, s)){
        int n; char buf[8];
        sscanf(s.c_str(), "%d,%s", &n, buf);
        if(strcmp(buf, "A")  == 0){ k[0]++; }
        if(strcmp(buf, "B")  == 0){ k[1]++; }
        if(strcmp(buf, "AB") == 0){ k[2]++; }
        if(strcmp(buf, "O")  == 0){ k[3]++; }
    }
    REP(i,4) cout << k[i] << endl;
    return 0;
}