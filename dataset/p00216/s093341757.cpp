#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<map>
#include<stack>
#include<queue>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    int w;
    while(cin >> w, w != -1){
        int bill = 0, ans = 4280;
        if(w < 10){
            bill += 1150;
        }
        else if(w >= 10 && w < 20){
            bill += 1150;
            bill += (125 * (w - 10));
        }
        else if(w >= 20 && w < 30){
            bill += 1150;
            bill += (125 * 10);
            bill += (140 * (w - 20));
        }
        else if(w >= 30){
            bill += 1150;
            bill += (125 * 10);
            bill += (140 * 10);
            bill += (160 * (w - 30));
        }
        cout << ans - bill  << endl;
    }
}