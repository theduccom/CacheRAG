#include <iostream>
#include <cstdio>
using namespace std;
//菱形
bool rhombus(int a, int b, int c) {
    return(a == b && (a < c < a + b));
}
//長方形
bool rectangle(int a, int b, int c) {
    return(a != b && (a*a + b*b == c*c));
}
int main(void) {
    int a, b, c;
    int ans1 = 0, ans2 = 0;
    while(scanf("%d,%d,%d", &a, &b, &c) != EOF) {
        if(rectangle(a, b, c)) ans1++;
        else if(rhombus(a, b, c)) ans2++;
    }
    cout << ans1 << endl << ans2 << endl;
    return(0);
}