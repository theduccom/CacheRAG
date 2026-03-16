#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
    int ans[4] = {0};
    int n;
    char buf[80];
    string b;

    while (scanf("%d,%s",&n,buf)!=EOF) {
        b = string(buf);
        if (b == "A") {
            ans[0]++;
        }
        else if (b == "B") {
            ans[1]++;
        }
        else if (b == "AB") {
            ans[2]++;
        }
        else if (b == "O") {
            ans[3]++;
        }
    }
    for (int i=0;i<4;i++) {
        cout<<ans[i]<<endl;
    }
    return 0;
}