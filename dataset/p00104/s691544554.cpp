#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    int n,m;
    bool loop;
    int a,b;

    while(cin >> a >> b, b){
        char map[100][100];
        n = m = 0;
        loop = true;
        rep(i,a){
            rep(j,b){
                cin >> map[i][j];
            }
        }
        for(int k = 0; k < a * b; k++){
            if(map[n][m] == '>')
                m++;
            else if(map[n][m] == '<')
                m--;
            else if(map[n][m] == 'v')
                n++;
            else if(map[n][m] == '^')
                n--;
            else
                loop = false;
        }
        if(loop == false)
            cout << m << " " << n << endl;
        else
            cout << "LOOP" << endl;
    }
}