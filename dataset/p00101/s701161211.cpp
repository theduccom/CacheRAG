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
    int n, gar;
    scanf("%d%*d", &n);
    rep(i,n){
        string s;
        getline(cin, s);
        while(s.find("Hoshino") < 40000){
            s.replace( s.find("Hoshino"), 7, "Hoshina");
        }
        cout << s << endl;
    }
}