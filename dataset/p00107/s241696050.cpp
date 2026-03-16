#include <bits/stdc++.h>

using namespace std;

int main(){

    double a, b, c, n, r, minEdge;

    while(cin >> a >> b >> c, a || b || c){

        minEdge = min(min(hypot(a, b), hypot(a, c)), hypot(b, c));

        cin >> n;

        for(int i = 0; i < n; ++i){

            cin >> r;

            if(minEdge < 2 * r){
                cout << "OK" << endl;
            } else {
                cout << "NA" << endl;
            }

        }

    }

}