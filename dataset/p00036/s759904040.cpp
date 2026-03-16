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
    enum blocks{
        A = 18, B = 48, C = 6, D = 30, E = 20, F = 34, G = 16
    };
    string surface, input;
    while(cin >> surface){
        rep(i,7){
            cin >> input;
            surface+= input;
        }
        int first = -1, location = 0;
        rep(i,65){
            if(surface[i] == '1' && first == -1){
                first = i;
            }else if(surface[i] == '1'){
                location+= i - first;
            }
        }
        if(A == location) cout << 'A' << endl;
        else if(B == location) cout << 'B' << endl;
        else if(C == location) cout << 'C' << endl;
        else if(D == location) cout << 'D' << endl;
        else if(E == location) cout << 'E' << endl;
        else if(F == location) cout << 'F' << endl;
        else if(G == location) cout << 'G' << endl;
    }
}