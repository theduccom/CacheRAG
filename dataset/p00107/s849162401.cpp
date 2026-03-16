#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<vector>
#include<algorithm>
#include<string.h>
#include<math.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << x << endl;
using namespace std;

int main(){
    double x[3];
    int n;
    double e;

    while(cin >> x[0] >> x[1] >> x[2], x[2]){
        sort(x, x + 3);
        cin >> n;
        rep(i,n){
            cin >> e;
            if( sqrt(x[0] * x[0] + x[1] * x[1]) < 2 * e ){
                cout << "OK" << endl;
            }else{
                cout << "NA" << endl;
            }
        }

    }
}