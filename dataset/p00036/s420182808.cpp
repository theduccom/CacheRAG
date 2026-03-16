#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
#include <set>
#include <math.h>
#include <utility>
#include <stack>
#include <string.h>
#include <complex>
using namespace std;
const int INF = 1<<29;
const double EPS = 1e-8;
//typedef vector<int> vec;
typedef vector<char> vec;
typedef vector<vec> mat;
typedef pair<int,int> P;
struct edge{int to,cost;};


const int block[8][7][4] ={
    {{1,1,0,0},
     {1,1,0,0},
     {0,0,0,0},
     {0,0,0,0}},
    {{1,0,0,0},
     {1,0,0,0},
     {1,0,0,0},
     {1,0,0,0}},
    {{1,1,1,1},
     {0,0,0,0},
     {0,0,0,0},
     {0,0,0,0}},
    {{0,1,0,0},
     {1,1,0,0},
     {1,0,0,0},
     {0,0,0,0}},
    {{1,1,0,0},
     {0,1,1,0},
     {0,0,0,0},
     {0,0,0,0}},
    {{1,0,0,0},
     {1,1,0,0},
     {0,1,0,0},
     {0,0,0,0}},
    {{0,1,1,0},
     {1,1,0,0},
     {0,0,0,0},
     {0,0,0,0}}
};

int main(){
    while(1){
        int field[8][8];
        int i=0, j=0;
        string row;
        while(cin >> row){
            for(j=0;j<8;j++){
                field[i][j] = (int)(row[j]-'0');
            }
            i++;
            if(i==8)break;
        }
        if(i!=8)break;

        bool found = false;
        for(i=0;i<8;i++){
            for(j=0;j<8;j++){
                for(int n=0;n<7;n++){
                    bool fit = true;
                    for(int k=0;k<4;k++){
                        for(int l=0;l<4;l++){
                            if(block[n][k][l]==0)continue;
                            if(i+k>=8 || j+l>=8 || field[i+k][j+l]==0){
                                fit = false;
                                break;
                            }
                        }
                        if(!fit)break;
                    }
                    if(fit){
                        printf("%c\n", 'A'+n);
                        found = true;
                        break;
                    }
                }
                if(found) break;
            }
            if(found) break;
        }
    }

    return 0;
}