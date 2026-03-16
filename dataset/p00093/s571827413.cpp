#include <bits/stdc++.h>
using namespace std;
int p=0;
int main(void){
    // Your code here!
    while (true){
    int a,b,n=0;
    cin >> a >> b;
    if (a==0 && b==0) break;
    if (p!=0) cout << endl;
    for (int i=a;i<b+1;i++){
        if (i%400==0) {n=1;cout << i << endl;}
        else if (i%100==0) continue;
        else if (i%4==0) {n=1;cout << i << endl;}
    }
    if (n==0) cout << "NA" << endl;
    p++;
    }
}
