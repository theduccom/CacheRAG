#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;
int main(void){
    // Here your code !
    int n;
    cin >> n;
    vector<string> a(1001);
    bool run[30]={false, false, false};
    int out=0, e=0;
    int point[500] = {};
    int j=0;
    int k=0;
    while(cin >> a[j]) {
        if(a[j]=="HIT") {
            if(run[2]) {
                point[e]++;
                run[2] = false;
            }
            if(run[1]) {
                run[2] = true;
                run[1] = false;
            }
            if(run[0]) {
                run[1] = true;
                run[0] = false;
            }
            run[0] = true;
        } else if(a[j]=="OUT") {
            out++;
            if(out==3) {
                out = 0;
                run[0] = false;
                run[1] = false;
                run[2] = false;
                e++;
            }
        } else {
            k=0;
            if(run[0]) k++;
            if(run[1]) k++;
            if(run[2]) k++;
            run[0] = false;
            run[1] = false;
            run[2] = false;
            REP(i,k) {
                point[e]++;
            }
            point[e]++;
        }
        j++;
    }
    REP(i,n) {
        cout << point[i] << endl;
    }
 
}