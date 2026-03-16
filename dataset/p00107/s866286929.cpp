#include <bits/stdc++.h>
using namespace std;
int depth, width, height;
double a, b;

bool judge(int rad) {
    return(rad > sqrt(a+b));
}

int main(void) {
    while(cin >> depth >> width >> height, depth|(width|height)) {
        a = (width*width / 4.0);
        b = (height*height / 4.0);
        int num; cin >> num;
        for(int r = 0; r < num; r++) {
            int input; cin >> input;
            puts((judge(input)) ? "OK":"NA");
        }
    }
    return(0);
}