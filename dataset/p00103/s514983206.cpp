#include <cstdio>
#include <iostream>
#include <string.h>

#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)

using namespace std;

int main() {
	int n;
	int base = 0, out = 0, score = 0;
	cin >> n;  
    while(1) {
        char str[10];
        if(EOF == scanf("%s", str)) break;
        if(!strcmp(str, "OUT")) {
            out++;
            if(out >= 3) {
                cout << score <<endl;
                score = out = base = 0;
                n--;
            }
        } else if(!strcmp(str, "HOMERUN")) {
            score += base + 1;
            base = 0;
        } else {
            base++;
            if(base >= 4) {
                score++;
                base--;
            }
        }
    }
    if(n) {
        cout << score << endl;
    }
	return 0;
}