#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

#define REP(i, n)       REPEAT(i, 0, n)
#define REPEAT(i, k, n) for (int i = (k); i < (n); ++i)

int main(){
    string s;
    while(getline(cin, s)){
        int l[10],v[2];
        sscanf(s.c_str(), "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&v[0],&v[1]); 

        int total = 0; REP(i,10) total += l[i];
        double d = (double)total * v[0] / (v[0]+v[1]);
        REP(i,10){
            if(d <= l[i]){
                cout << i+1 << endl;
                break;
            }
            d -= l[i];
        }
    }
    return 0;
}