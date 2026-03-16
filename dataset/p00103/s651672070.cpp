#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
 
int main() {
    int n,i,p,ten,out;
    char d[3]={'I','U','O'},ch[8];
    cin >> n;
    for (n;n>0;n--) {
        p=0; out=0; ten=0;
        while(out<3) {
            cin >> ch;
            for (i=0;i<3;i++) if (ch[1]==d[i]) break;
            if (i==0) { ten+=p & 1; p=(p/2) | 4;}
            if (i==1) out++;
            if (i==2) { ten+=(p & 4)/4+(p & 2)/2+(p & 1)+1; p=0;}
            }
        cout << ten << endl;
    }
    return 0;
    }