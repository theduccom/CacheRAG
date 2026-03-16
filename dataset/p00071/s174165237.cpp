#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<vector>
#include<algorithm>
#include<string.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << x << endl;
using namespace std;

char s[8][9];

void barn(int x, int y){
    if(x < 0 || y < 0 || x > 7 || y > 7) return;
    if(s[x][y] == '0') return;
    s[x][y] = '0';
    barn(x+1, y);
    barn(x+2, y);
    barn(x+3, y);
    barn(x-1, y);
    barn(x-2, y);
    barn(x-3, y);
    barn(x, y+1);
    barn(x, y+2);
    barn(x, y+3);
    barn(x, y-1);
    barn(x, y-2);
    barn(x, y-3);
}

int main(){
    int n;
    cin >> n;
    rep(i,n){
        int x, y;
        rep(j,8){
            cin >> s[j];
        }
        cin >> x >> y;
        barn(y - 1, x - 1);
        
        cout << "Data " << i + 1 << ':' << endl;
        rep(j,8){
            cout << s[j] << endl;
        }
    }
}